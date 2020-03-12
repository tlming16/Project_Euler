/*
* 2020.03.12 
* tlming16 
*/

# ifndef VAR_H 
#define  VAR_H 
# include <string> 
namespace mml{
class var{ 
public:
    var():value_(0),grad_(1){ } 
    var(double v,double g=1.0):value_(v),grad_(g){} 
    var(const var &) =default; 
    var(var &&) = default ;
    var  operator =(const var &) = default ; 
    var operator =(var &&) = default ; 
    var operator + (const var &); 
    var operator - (const var &); 
    var operator / (const var &); 
    var operator * (const var &);
    static var sin(const var &) ;
    static var cos(const var &);
    static var tan(const var &);
    static var exp(const var &); 
    static var abs(const var &); 
    static var log (const var &); 
    static var pow (const var &); 
    std::string str() const; 
private:
    double value_=0; 
    double grad_=1; 

}; 

var make_var(double val){
    return var(val,1.0); 
}
} // end of namespace mml 
#endif
