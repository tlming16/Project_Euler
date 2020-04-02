# ifndef DUPLICATE_HPP
# define DUPLICATE_HPP
# include <algorithm> // for std::sort 
# include <vector>
# include <set>
using std::vector;
using std::set;
namespace util{
  template<class T> 
  bool duplicate_bysort( vector<T> a,vector<T> b);
  template<class T> 
  bool duplicate_byset(const vector<T> &a,const vector<T> &b)

  template<class T> 
  bool duplicate(const vector<T> & a);
  template<class T> 
  bool duplicate(const vector<T> &a, const vector<T> & b);
}  //end namespace util 

template<class T> 
bool util::duplicate(const vector<T> & a){
  std::set<T> s(a.begin(),a.end());
  return s.size()==a.size();
}
template<class T>
bool util::duplicate(const vector<T> & a,const vector<T> & b){
  return duplicate_byset(a,b);
}

template<class T> 
  bool util::duplicate_bysort(vector<T> a,vector<T> b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    size_t ia=0;
    size_t ib=0;
    do {
      if (a[ia]==b[ib])  return true;
      else if (a[ia]<b[ib]) ia++;
      else ib++;
    }while(ia<a.size() && ib<b.size());
    return false; 
  }
template<class T> 
  bool util::duplicate_byset(const vector<T> &a,const vector<T> &b){
    std::set<T> s(a.begin(),a.end());
    for(auto x:b){
      if (s.count(x)) return false;
    }
    return true;

  }


# endif 