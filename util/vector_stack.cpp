
# include <cstddef>
# include <utility>
namespace util{
void invariant(bool flag){
   if (!flag) {
    static_assert(true,"wrong invariant\n");
   }
    
}
template <typename T, std::size_t N>
class static_stack {
  public:
    // Boiler plate typedefs
    using value_type = T;
    using size_type = std::size_t;
    using reference = value_type&;
    using const_reference = const value_type&;
    using pointer = T*;
    using const_pointer = const T*;

    static_stack() = default;

    ~static_stack() {
        while (size()) {
            pop();
        }
    }

    /**
     * Stacks are non-copyable and non-movable
     */
    static_stack(const static_stack&) = delete;
    static_stack& operator=(const static_stack&) = delete;

    static_stack(static_stack&& other) = delete;
    static_stack& operator=(static_stack&& other) = delete;

    template <typename... Args>
    void emplace(Args&&... args) {
        invariant(_size <= N);

        new (_data() + _size) T(std::forward<Args>(args)...);

        _size++;
    }

    void pop() {
        invariant(_size > 0);

        (&top())->~T();

        _size--;
    }

    const_reference top() const {
        invariant(_size > 0);
        return _data()[_size - 1];
    }

    reference top() {
        invariant(_size > 0);
        return _data()[_size - 1];
    }

    size_type size() const {
        return _size;
    }

    bool empty() const {
        return _size == 0;
    }

    size_type capacity() const {
        return N;
    }

  private:
    pointer _data() {
        return reinterpret_cast<pointer>(&_storage);
    }

    const_pointer _data() const {
        return reinterpret_cast<const_pointer>(&_storage);
    }

  private:
    typename std::aligned_storage<sizeof(T) * N, std::alignment_of<T>::value>::type _storage;

    size_type _size = 0;
};

} // end of namespace util 
# ifdef __main__  // __main__ entry 
# include<iostream> 

int main(){
    using namespace util;
    using namespace std;
    static_stack<int,100> s;
    s.emplace(10);
    s.emplace(11);
    for (int i=2;i<s.capacity();i++){
        s.emplace(i);
    } 
    while (!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;

}


#endif 