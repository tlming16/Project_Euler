// reference from https://en.cppreference.com/w/cpp/coroutine/coroutine_handle
// filename c4.cpp 
// g++ c4.cpp -fcoroutines -std=c++2a 
#include <coroutine>
#include <iostream>
#include <ranges>
 
template<class T>
struct generator {
    struct promise_type {
        auto get_return_object() {
            return generator(std::coroutine_handle<promise_type>::from_promise(*this));
        }
        std::suspend_always initial_suspend() { return {}; }
        std::suspend_always final_suspend() noexcept { return {}; }
        void unhandled_exception() { throw; }
        std::suspend_always yield_value(T value) {
            current_value = std::move(value);
            return {};
        }
        void await_transform() = delete; // disallow co_await in generator coroutines
        T current_value;
    };
 
    generator(std::coroutine_handle<promise_type> h) : coro(h) {}
    generator(generator&& other) : coro(other.coro) { other.coro = {}; }
    ~generator() { if (coro) coro.destroy(); }
 
    // range-based for support
    struct iter {
        explicit iter(std::coroutine_handle<promise_type> h) : coro(h) {}
        void operator++() { coro.resume(); }
        T operator*() const { return coro.promise().current_value; }
        bool operator==(std::default_sentinel_t) const { return coro.done(); }
    private:
        std::coroutine_handle<promise_type> coro;
    };
    iter begin() { coro.resume(); return iter(coro); }
    std::default_sentinel_t end() { return {}; }
 
private:
    std::coroutine_handle<promise_type> coro;
};
 
generator<int> ints(int x) {
    for (int i = 0; i < x; ++i)
        co_yield i;
}

generator<int> fib(int x) {
    int a=1,b=1;
    for( int i=1;i<x;i++){
        int t = b;
        b= a+t;
        a=t;
        co_yield a;
    }
}
 
int main() {
    for (auto i : fib(40))
        std::cout << i << '\n';
}