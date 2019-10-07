/*  
* Solution to Project Euler problem 47
* by mathm   
*/

# include <iostream>
typedef long long int64;

bool is_prime(int64);
int distinct_prime_factors( int64);
int64 compute();
bool  cond(int64 n);


int main(){

	using std::cout;
	using std::endl;

	cout<<compute()<<endl;

	
}

int distinct_prime_factors(int64 num){
	if(is_prime(num))  return 1;
	int ans=1;
	if(num%2==0) ans++;
	while(num%2==0) num/=2;
	for( int64 i=3;i*i<=num;i+=2){
		if( num%i==0){
			ans++;
			while(num%i==0){
				num/=i;
			}
		}
	}
	
	return ans;

  
}

int64 compute(){
	int64 index=2;
	for(;;){
		index++;
		
		if( cond(index)) {
			return index;
		}


	}

}
bool cond(int64 num){
	for(int i=0;i<4;i++){
		if( distinct_prime_factors(num+i)!=4) return false;
	}
	return true;
}

bool is_prime(int64 n){
	if(n<2)  return false;
	if(n==2)  return true;
	if(n%2==0)  return false;
	for(int64 i=2;i*i<=n;i++){
		if( n%i==0) return false;
	}
	return true;
}