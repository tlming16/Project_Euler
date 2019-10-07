/*  
* Solution to Project Euler problem 1 
* by mathm   
*/


#include<iostream>
#include<memory>
class p001{
public:
	p001()=default;
	int compute() const ;

};

int p001::compute() const{
	int sum=0;
	const int N=1000;
	for(int i=1;i<N;i++){
		if(i%3==0||i%5==0){
			sum+=i;
		}
		
	}
	return sum;
}

int main(){
	std::cout<<std::unique_ptr<p001>(new p001)->compute()<<std::endl;

}
