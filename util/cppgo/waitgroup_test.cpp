# include "waitgroup.h"
# include <thread> 
# include <functional> 
# include <iostream>
# include<chrono>
using namespace std;
int main(){
  wait_group wg;
  wg.add(1);
  std::thread t1([& wg](){
    cout<<"sleep in thread #" <<std::this_thread::get_id()<<endl;
    std::this_thread::sleep_for(std::chrono::seconds(10));
    wg.done();}); 
  wg.add(1);
  std::thread t2([& wg](){
    cout<<"sleep in thread #" <<std::this_thread::get_id()<<endl;
    std::this_thread::sleep_for(std::chrono::seconds(10));
    wg.done();}); 
    t1.join();
    t2.join();
    wg.wait();
    

}