/*  
* Solution to Project Euler problem 7
* by mathm   
*/

#include <iostream>


bool is_prime(long n){
	if (n<=1)  return false;
	if(n==2)  return true;
	if(n%2==0) return false;

	for(int i=3;i*i<=n;i+=2){
		if(n%i==0)  return false; 
	}

	return true;
}

long compute(){
	int index=1;
	int count=0;
	for(;;){
		index+=1;
		if(is_prime(index)){
			count++;
			if(count==10001)
				return index;
		}
	}
}


int main(){
	using std::cout;
	using std::endl;
	cout<<compute()<<endl;
}