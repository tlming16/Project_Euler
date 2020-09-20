# include "once.h"
# include <iostream>
# include <thread>
# include <functional>
# include <vector>
using namespace std; 
 int main() {
    std::mutex cout_mu;
    auto func =[&cout_mu](){ 
      cout_mu.lock();
      cout<<"thread id is #"<<std::this_thread::get_id()<<endl;
      cout_mu.unlock();
    };
    once o;
    o.exe_once(func);
    for (int i=0;i<10;i++){
      o.exe_once(func);
    }
    func();
    std::thread t(func);
    t.join();
    std::thread t2(func);
    t2.join();
    std::vector<std::thread> th;
    for (int i=1;i<100;i++){
      std::thread tt(func);
      th.push_back(std::move(tt));
    }
    for (auto & t:th) {
      t.join();
    }

 }