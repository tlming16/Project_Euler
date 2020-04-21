#ifndef VOID_PTR_H
namespace util{
bool compare(void * a,void * b){
  return reinterpret_cast<intptr_t>(a)<reinterpret_cast<intptr_t>(b);
}

}// end namespace util 
#define VOID_PTR_H