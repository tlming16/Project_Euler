#ifndef PARSE_HEX_H
#define PARSE_HEX_H
# include<string> 
namespace util{
using std::string;
unsigned parse_hex(const string str){
  unsigned value=0;
  for(auto c:str){
    int digit=0;
    if( 'a'<=c&& c<='f')
      digit=c-'a'+10;
    else if('A'<=c&&c<='F')
      digit=c-'A'+10;
    else if ('0'<=c&&c<='9')
      digit=c-'0';
    else 
      throw "error";
    value=(value<<4)+digit;
  }
  return value;
}

unsigned parse_hex(const char * str){
  return parse_hex(std::string(str));
}
}// end of namespace util
#endif 

