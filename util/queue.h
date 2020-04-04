#ifndef QUEUE_H 
#define QUEUE_H 
/*
std::make_heap,std::push_heap,std::pop_heap
*/
# include <algorithm> 
# include <vector>
# include <mutex>
# include <condition_variable>
# include <functional> 
namespace util {
  template<class T>
  class priority_queue{
  public:
    priority_queue() =default;
    priority_queue(const priority_queue<T> &)=default;
    priority_queue(priority_queue<T> &&)=default;
    priority_queue & operator= (const priority_queue<T> &)=default;
    priority_queue & operator= (priority_queue<T> &&)=default;
    void set_cmp(std::function<bool(const T &,const T &)> cmp){
      this->cmp =std::move(cmp);
    }
    void push(const T &);
    void push(T &&);
    void pop( T *); 
    std::size_t size() const ;
    bool empty() const ;
  private:
    std::vector<T> elements;
    std::function<bool(const T & left,const T & right)> cmp;
    mutable std::mutex mtx;
    std::condition_variable  cv;
  };

  template<class T> 
  bool priority_queue<T>::empty() const {
    std::lock_guard<std::mutex> lk(mtx);
    return elements.size();
  }
  template<class T> 
  std::size_t priority_queue<T>::size() const {
    std::lock_guard<std::mutex> lk(mtx);
    return elements.empty();
  }
  template<class T> 
  void priority_queue<T>::push(const T & e) {
    mtx.lock();
    elements.push_back(e);
    std::push_heap(elements.begin(),elements.end(),cmp);
    mtx.unlock();
    cv.notify_one();
  }
  template<class T> 
  void priority_queue<T>::pop( T * v){
    std::unique_lock<std::mutex> lk(mtx);
    cv.wait(lk,[this](){return !elements.empty();})
    std::pop_heap(elements.begin(),elements.end(),cmp);
    * v= elements.back();
    elements.pop_back();
  }


} // end namespace util


#endif 