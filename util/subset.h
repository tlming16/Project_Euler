# ifndef SUBSET_H
# define SUBSET_H 
# include <vector> 
# include <set>
using std::vector;
using std::set;
namespace util{
  bool subset_ofN(std::vector<int> & a,int N){
    std::vector<bool> mark(N,false);
    for( int i=0;i<a.size();i++){
      if (a[i]<1 || a[i]>N|| mark[a[i]-1]) return false;
      mark[a[i]-1]=true;

    }
    return true;
  }
  bool subset_ofN(std::vector<int> &a,int N,int ){
    std::set<int> s;
    for(auto x:a){
      if (x>N|| x<1) return false;
      if(!s.insert(x).second) return false;
    }
    return true;
  }

} //end namespace util
# endif