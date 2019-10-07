/*
* Solution to Project Euler problem 2
* by mathm

*/

#include<iostream>
#include<memory>
class p002{
public:
	p002()=default;

	int compute() const;

};

int p002::compute() const{
	int sum=0;
	int x=1;
	int y=2;
	const int N=4000000;
	while(x<N){
		if(x%2==0) sum+=x;
		int z=x+y;
		x=y;
		y=z;
	}

	return sum;

}

int main(){
	using std::cout;
	using std::endl;

	cout<<std::unique_ptr<p002>(new p002)->compute()<<endl;

}