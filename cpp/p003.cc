/*
* Solution to Project Euler  problem 3
* by mathm

*/


#include<iostream>
#include<memory>

class p003{
public:
	typedef long long Int;
	p003()=default;
	bool is_prime(Int) const ;
	Int compute() const ;
	Int largest_factor(Int ) const;

};

typename p003::Int p003::compute() const {
	const Int N=600851475143;
	return this->largest_factor(N);
}
bool p003::is_prime(typename p003::Int n) const{
	if(n<=1) return false;
	if(n==2) return true;
	if(n%2==0)  return false;
	for(int i=3;i*i<=n;i+=2){
		if(n%i==0) return false;
	}
	return true;
}

typename p003::Int p003::largest_factor(typename p003::Int n)const{
	int i=2;
	while(!this->is_prime(n)){
		if(n%i==0){
			while(n%i==0) n/=i;
		}
		i++;
	}
 return n;

}

int main(){

	using std::cout;
	using std::endl;

	cout<<std::unique_ptr<p003>(new p003)->compute()<<endl;
}
