# include <iostream>

bool is_prime(int x);

int count_consecutive_primes(int,int);

int compute();


int main(){

	using std::cout;
	using std::endl;

	cout<<compute()<<endl;
}


bool is_prime(int x){
	if( x<=1)  return false;
	if(x==2)  return true;
	if( x%2==0)  return false;

	for(size_t i=3;i*i<=x;i+=2){
		if( x%i==0)  return false;
	}

	return true;
}


int count_consecutive_primes(int a,int b){
	int index=0;
	while(true){
		int n=index*index+index*a+b;
		if( !is_prime(n)) return index;

		index++;
	}
}


int compute(){

	int len=0;
	int ans=0;
    const int N=1000;
	for( int i=-999;i<=N;i++){
		for (int j=2;j<=N;j++){
			int res=count_consecutive_primes(i,j);
			if( res>len){
				len=res;
				ans=i*j;
			}
		}
	}

	return ans;
}