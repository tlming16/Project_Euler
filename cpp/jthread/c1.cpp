// file_name c1.cpp 
// g++ c1.cpp -std=c++2a 
// all wrong reserved 
# include <thread> 
# include <iostream>

void func( std::stop_token st) {
  std::cout<<"start\n";
  while(!st.stop_requested()){
    std::cout<<"working....\n";
  }
  std::cout<<"stop\n";

}

int main(){

  std::jthread t(func);
  for( int i=0;i<10000;i++){
    std::this_thread::yield();
  }
}