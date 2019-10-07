/*
* Solution to Project Euler problem 5
* by mathm

*/

#include<memory>
#include<iostream>

class p005{

public:
	p005()=default;

	int compute() const;
	int gcd(int a,int b) const;


};


int p005::compute() const {
	int ans=1;
	for (int i=1;i<21;i++)
		ans*=i/gcd(i,ans);

	return ans;
}


int p005::gcd(int a,int b)const {
	if (b==0)  return a;
	else {
		return gcd(b,a%b);
	}
}

int main(){
	using std::cout;
	using std::endl;
	using std::unique_ptr;
	cout<<unique_ptr<p005>(new p005)->compute()<<endl;
}