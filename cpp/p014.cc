/*  
* Solution to Project Euler problem 14
* by mathm   
*/

# include <iostream>

typedef long long int64;

int collatz_chain_length(int64 x);
int collazt_length(int64 x);
int compute();
int compute2();

int main(){
	using std::cout;
	using std::endl;
	cout<<compute()<<endl;
}

int collatz_chain_length(int64 x){
	if(x==1) return 1;
	if(x %2==0){
		x/=2;
	}else {
		x=x*3+1;
	}

	return 1+collatz_chain_length(x);
}

int collazt_length(int64 x){
	if( x==1) return 1;
	int count=1;
	while( x!=1){
		count+=1;
		if (x%2==0){
			x/=2;
			if(x==1) break;
		}else{
			x=x*3+1;
		}
	}
	return count;
}

int compute(){
	const int N=1000000;
	int ans=0;
	int index=1;
	for( int i=1;i<=N;i++){
		int c=collazt_length(i);
		if (ans<c){
			index=i;
			ans=c;
		}
	}
	return index;
}

int compute2(){
	const int N=1000000;
	int ans=0;
	int index=1;
	for(int i=1;i<=N;i++){
		int c=collatz_chain_length(i);
		if( ans<c){
			ans=c;
			index=i;
		}
	}
	return index;
}