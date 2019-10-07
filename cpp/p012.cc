/*
* Solution to Project Euler problem 12
* by mathm

*/

#include <iostream>
#include <cmath>

typedef long long int64;

int num_divisors(int64);
int64 compute();


int main(){
	using std::cout;
	using std::endl;

	cout<<compute()<<endl;
}


int num_divisors(int64 n){
	int64 sqrtn=std::sqrt(n);
	int res=0;
	for(int i=1;i<sqrtn;i++){
		if(n%i==0) res+=2;
	}
	if (sqrtn*sqrtn==n){
		res-=1;

	}
return res;
}

int64 compute(){
	int64 ans=0;
	const int64 N=100000000;
	for (int64 i=1;i<N;i++){
		ans+=i;
		if( num_divisors(ans)>500){
			return ans;
		}
	}
}
