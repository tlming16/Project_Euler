// filename c3.pp 
// g++ c3.cpp -fcoroutines -std=c++2a 
// all wrong reserved 
# include <iostream>
# include <coroutine> 
using namespace std; 

template <class T> 
struct example {
  struct promise_type;
  using handle_type =std::coroutine_handle<promise_type>;

  example( handle_type h):_h(h){}
  example(const example &)=delete;
  example(example&&)=default;
  example & operator = (const example &)=delete ;
  example & operator =(example &&) =delete;
  ~example(){
    if(_h){
      _h.destroy();
    }
  }
  T get(){
    if (!this->_h.done()){
      this->_h.resume();
    }
    return this->_h.promise().value;
  }
  struct promise_type{
    promise_type()=default;
    ~promise_type() =default; 
    example<T> get_return_object(){
      return example<T>{handle_type::from_promise(*this)}; 
    } 
    auto initial_suspend() ->std::suspend_always{
      return std::suspend_always{};
    }
    auto yield_value(int v) -> std::suspend_always{
      value=v;
      return std::suspend_always{};
    }
    auto final_suspend() noexcept ->std::suspend_always{
      return std::suspend_always{};
    }
    void unhandled_exception(){
      std::terminate();
    }
    T value;
  };
  handle_type _h;
};

struct awaitble_obj {
  int v;
  awaitble_obj():v(0){}
  bool await_ready(){
    return true;
  }
  auto await_suspend(std::coroutine_handle<> await_handle)->bool {
    return false;
  }
  auto await_resume() ->int {
    return v++;
  }

};

example<int> await_routine(){
  awaitble_obj a = awaitble_obj();
  for (int i=1;i<100;i++){
    auto v = co_await a;
    co_yield v;
  }
}

int main(){
  auto a = await_routine();
  auto b= a.get();
  cout<<b<<endl;
  b=a.get();
  cout<<b<<endl;
  b=a.get();
  cout<<b<<endl;
  b=a.get();
  cout<<b<<endl;
  b=a.get();
  cout<<b<<endl;

  return 0;
}

