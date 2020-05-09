# include <vector>
# include <string>
# include <sstream> 

namespace util{

  std::vector<std::string> split_v1(std::string const &in, char sep) {
    std::string::size_type b = 0;
    std::vector<std::string> result;

    while ((b = in.find_first_not_of(sep, b)) != std::string::npos) {
        auto e = in.find_first_of(sep, b);
        result.push_back(in.substr(b, e-b));
        b = e;
    }
    return result;
}

inline std::vector<std::string> split_v2(const std::string& s, char delim) {
  std::string item;
  std::istringstream is(s);
  std::vector<std::string> ret;
  while (std::getline(is, item, delim)) {
    ret.push_back(item);
  }
  return ret;
}

std::vector<std::string> split(const std::string & s,char delim){
  return split_v2(s,delim);
}



} // end of namespace util

#ifdef __main__
# include <iostream>
using namespace std;
using namespace util;
int main(){
  std::string s="156787.900.89080.0";
  for (auto x: util::split(s,'.')){
    cout<<x<<endl;
  }
}

# endif 