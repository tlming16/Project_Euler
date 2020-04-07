# include <mutex>
# include <atomic>
# include <functional> 
struct once { 
  std::atomic<bool> done{false};
  std::mutex mtx;
  void  exe_once(std::function<void(void)> f);

};
void once::exe_once(std::function<void(void)> f){
  if (done==false) {
    mtx.lock();
    if (done==false){
      f();
      done.store(true,std::memory_order_release);
    }
    mtx.unlock();
  }
}