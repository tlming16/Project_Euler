#include<mutex>
#include<condition_variable> 
#include<atomic>

struct wait_group{
  int wait_cnt{0}; 
  std::mutex mtx;
  std::condition_variable cv;
  void add(int delta); 
  void done();
  void wait();

};

void wait_group::add(int delta){
  mtx.lock();
  wait_cnt +=delta;
  mtx.unlock();
} 
void wait_group::done(){
  mtx.lock();
  wait_cnt-=1;
  cv.notify_one();
  mtx.unlock();

}
void wait_group::wait(){
  std::unique_lock<std::mutex> lk(mtx);
  if (wait_cnt>0) {
    cv.wait(lk,[this](){return wait_cnt==0;});
  }
}
