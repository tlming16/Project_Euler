/*  
* Solution to Project Euler problem 10
* by mathm   
*/


#include <iostream>
#include <vector>

typedef long long int64;
std::vector<bool>  prime_table(int n);
int64 compute();


int main(){
using std::cout;
using std::endl;

cout<<compute()<<endl;

}

std::vector<bool> prime_table(int64 n){
	std::vector<bool> res(n+1,true);
	res[0]=res[1]=false;

	for(int64 i=2;i<n+1;i++){
		for( int64 j=i*i;j<n+1;j+=i){
			if (res[i]){
				res[j]=false;
			}
		}
	}
	return res;


}

int64 compute(){

	const int64 N=1999999;
	std::vector<bool> primes=prime_table(N);
	int64 ans=0;
	for( int64 i=0;i<primes.size();i++){
		if( primes[i]) {
			ans+=i;
		}

	}

	return ans;
}