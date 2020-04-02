# ifndef HASH_HPP 
# define HASH_HPP 
# include <cstddef> // for std::size_t 
# include <algorithm> // for std::hash<T> 

namespace util {
  template<class T> 
  std::size_t hash_combine(std::size_t & seed,const T h);

  template <class T> 
  inline std::size_t hash_combine(std::size_t & seed,const T h) {
    seed ^= static_cast<std::size_t>(h) + 0x9e3779b6 + (seed<<6) +(seed>>2);
    return seed;
}
  template<class T1,class T2> 
  inline std::size_t hash_value(const T1 & v1,const T2 & v2) {
    std::size_t h1 = std::hash<T1>()(v1);
    std::size_t h2= std::hash<T2>()(v2);
    std::size_t res = hash_combine(h1,h2);
    return res;
  }

} // end namespace util

#endif 