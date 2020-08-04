# include <random>
# include <iostream>
# include <vector> 
# include <iterator>

int main(){
  std::random_device rd;
  std::mt19937 g(rd());
  std::uniform_real_distribution<double> u(0,10);
  std::vector<double> v;
  int n;
  std::cin>>n;
  while(n--){
    v.push_back( u(g));
  }
  std::copy( v.begin(),v.end(),std::ostream_iterator<double>(std::cout,","));
  return 0;

}