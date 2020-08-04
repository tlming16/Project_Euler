#ifndef TO_STRING_H
#define TO_STRING_H 
# include <string> 
# include <cstdio>
using std::string;
namespace util{
  inline string to_string( const char* cstr){
    return string( cstr);
  }
  inline string to_string( const string str){
    return str;
  }
  inline string to_string( int n){
    char buf[30];
    std::snprintf(buf,sizeof(buf),"%d",n);
    return string(buf);
  }
  inline string to_string( long  num){
    char buf[30];
    std::snprintf(buf,sizeof(buf),"%lld",num);
    return string(buf);
  }
  inline string to_string ( const void * ptr){
    char buf[30];
    std::snprintf(buf,sizeof(buf),"%p",ptr);
    return string(buf);
  }

}// end of namespace util

# endif 
#endif 