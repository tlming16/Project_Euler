// filename c2.cpp 
// g++ c2.cpp -fcoroutines -std=c++2a 
// example of coroutine 
// all wrong reserved 

# include <iostream> 
# include <coroutine> 

using namespace std; 

struct example{
   struct promise_type;
   using handle_type = std::coroutine_handle<promise_type>;

   example( handle_type h):_handle(h){
    cout<<"# construct example object\n";
   }
   example( const example &)=delete;
   example & operator =(const example &) =delete;
   example(example &&) =default; 
   example & operator =( example &&) =default;
   ~ example(){
    cout<<"# destruct example object\n";
    if (_handle){
      _handle.destroy();
    }
   }
   int current_value() {
    return _handle.promise().value;
   } 
   bool move_next(){
    _handle.resume();
    return !_handle.done();
   }
   int get(){
    return _handle.promise().value;
   }
   struct promise_type{
    promise_type(){
      cout<< "@ construct promise_type\n";
    }
    ~promise_type(){
      cout<<"@ destruct promise_type\n";
    }
    example get_return_object(){
      cout<<"@ get_return_object()\n";
      return example{handle_type::from_promise(*this)};
    }
    std::suspend_never initial_suspend(){
      cout<<"@ initial_suspend()\n"; 
      return std::suspend_never{};
    }
    std::suspend_never return_void(){
      cout<<"@ return_void()\n";
      return std::suspend_never{};
    }
    std::suspend_always return_value(int t){
      cout<<"@ return_value\n";
      value=t;
      return std::suspend_always{};
    }
    std::suspend_always yield_value(int t) {
      std::cout<< "@ yield_value()\n"; 
      value=t;
      return std::suspend_always{};
    }
    std::suspend_always final_suspend(){
      cout<<"@ final_suspend()\n";
      return std::suspend_always{};
    }
    void unhandled_exception(){
      std::terminate();
    }
    int value;
   };
   handle_type _handle;
};

example example_2(int x){
  std::cout<<"-------start coroutine------\n";
  for (int i=0;i<x;i++){
    co_yield i*2;
  }
  co_return 100;
} 

int main(){
  cout<<"create coroutine\n";
  auto a = example_2(5);
  do {
    cout<< "value is "<<a.current_value()<<endl;
  }while( a.move_next());
 x = a.get();
 cout<<"return value is "<<x<<endl;
  return 0;

}