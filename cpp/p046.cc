#include<iostream>
#include<cmath>

using namespace std;

typedef long long int int64;
typedef int64 Int64;

bool goldbach_num(int64 n);
bool  is_prime(int64 n);



int main(){

	int64 i=9;

	while(goldbach_num(i)){
		i+=2;
	}

	cout<<i<<endl;
}

bool is_prime(int64 n){
	if(n<2)  return false;
	if(n==2) return true;

	if(n%2==0)  return false;

	for(int64 j=3;j*j<=n;j++){
		if(n%j==0)  return false;
	}

	return true;
}


bool goldbach_num(int64 n){

	if(is_prime(n))  return true;
	int64 a=sqrt(n/2);
	for(int64 i=1;i<=a;i++){
		if(is_prime(n-2*i*i)) return true;
	}

	return false;
}