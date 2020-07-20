# include <iostream>
# include <string> 
# include <cstring>
# include <vector> 
# include <algorithm>
# include <iterator>
using namespace std; 
namespace util{
  vector<int>  computr_prefix(const string & pattern);
  vector<int> computr_prefix(const char * s ){
    return computr_prefix(string(s));
  }
  int kmp_match(const string & str,const string & pattern);
  int kmp_match(const char * s,const char * p){
    return kmp_match(string(s),string(p));
  }
} // end of namespace util 

vector<int> util::computr_prefix( const string & pattern) {
  int m = pattern.size();
  vector<int> next(m,0);
  int k=0;
  int q;
  for (q=1;q<m;q++) {
    while (k>0 && (pattern[k]!=pattern[q])){
      k=next[k-1];
    }
    if ( pattern[k]==pattern[q]){
      k++;
    }
    next[q]=k;
  }
  return next;
}


int util::kmp_match(const string  &text,const string & pattern) {
  int n = text.size();
  int m= pattern.size();
  if(m==0){
    return 0;
  }
  if (m>n){
    return -1;
  }
  int q=0;
  auto next =std::move(computr_prefix(pattern));
  #ifdef __debug__
  copy( next.begin(),next.end(),ostream_iterator<int>(cout,"->"));
  cout<<"\n";
  #endif 

  for( int i=0;i<n;i++){
    while( q>0 &&(pattern[q]!=text[i])) {
      q=next[q-1];
    }
    if ( pattern[q]==text[i]) {
      q++;
    }
    if (q==m) {
      return i+1-m;
    }

  }
  return -1;
}

# ifdef __main__ 

int main (){

  const char * s1 ="bababaaababababcaabbabababca";
  const char * s2="ababababca";
  int offset= util::kmp_match( s1,s2);
  cout<< offset<<endl;
  
}

# endif 