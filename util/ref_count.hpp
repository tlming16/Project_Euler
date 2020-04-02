# ifndef REF_COUNT_HPP 
# define REF_COUNT_HPP 
# pragma once 
# include <atomic> 
namespace util{
  class RefCount{
  protected:
    std::atomic_ulong cnt;
  public:
    RefCount(unsigned long int n);
    void inc(void);
    bool dec(void);
    operator bool (void ) const;

  };
  inline RefCount::RefCount(unsigned long int n){
    cnt.store(n,std::memory_order_release);
  }
  inline void RefCount::inc(void){
    cnt.fetch_add(1U,std::memory_order_relaxed);
  }
  inline RefCount::dec(void){
    return cnt.fetch_sub(1U,std::memory_order_acq_rel)==1U;
  }
  inline RefCount::operator bool(void) const {
    return n.load(std::memory_order_acquire)>0U;
  }


} // end namespace util 
# endif 