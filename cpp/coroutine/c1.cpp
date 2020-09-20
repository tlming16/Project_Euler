// filename c1.cpp 
// g++ c1.cpp -fcoroutines -std=c++2a  
// example of c++ coroutine 
// all wrong reserved
# include <iostream>
# include <coroutine> 
using namespace std; 
template<class T> 
struct example {

  struct promise_type;
  using handle_type = std::coroutine_handle<promise_type>; 

  example(handle_type h):_handle(h){
    cout<< "# create example object\n";
  }
  example(const example &)=delete;
  example & operator=(const example &) =delete;
  example(example && other){
    _handle = other._handle;
    other._handle=nullptr;
    cout<<"# move construct example  object\n";
  }
  example & operator = (example && other) {
    _handle= other._handle;
    other._handle=nullptr;
    return *this;
  }

  T get() {
    cout<<" get return value\n"; 
    if (!this->_handle.done()){
      this->_handle.resume();
    }
    return this->_handle.promise().value;
  }

  struct promise_type{
    promise_type() {
      cout<<"@  promise_type created\n";
    }
    example<T> get_return_object(){
      cout<<"@ get_return_object called\n"; 
      return example<T>{handle_type::from_promise(*this)};
    }

    std::suspend_always initial_suspend(){
      cout<<"@ initial_suspend called\n";
      return std::suspend_always{};
    }
    std::suspend_always yield_value(int v){
      cout<<"@ yield_value() called\n"; 
      value=v;
      return std::suspend_always{};

    }
    std::suspend_never return_value(T v){
      
      cout<<"@ return_value is called\n";
      value =v;
      return std::suspend_never{};
    }
    std::suspend_always final_suspend(){
      cout<<"@ finale_suspend is called\n";
      return std::suspend_always{};
    }
    void unhandled_exception() {
      std::terminate();
    }
    T value;

  };
  handle_type _handle;


};

example<int> example_1(){
  std::cout<<"------start coroutine------ \n";
  co_yield 1;
  co_yield 2;
  for (int i=3;i<10;i++){
    co_yield i;
  }
  co_return -1;
}


int main(){

  auto a =example_1();
  cout<<" create a coroutine ,try to get value\n";
  cout<<"value is "<<a.get()<<"\n";
  cout<<a.get()<<endl;

  for ( int i=3;i<12;i++){
    cout<<a.get()<<endl;
  }

}