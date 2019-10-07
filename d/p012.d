
import std.stdio;
import std.math;

alias int64= long;

int num_divisors(int64);
int64 compute();

void main(){
	printf("%d ",compute());
}

int num_divisors(int64 n){
	int64 sqrtn=cast(int64)sqrt(cast(real)n);
	int res=0;
	for( int i=1;i<sqrtn;i++){
		if(n%i==0) res+=2;
	}
	if( sqrtn*sqrtn==n) res-=1;

	return res;
}

int64 compute(){
	int64 ans=0;
	const int64 N=100_000_000;
	for(uint i=1;i<N;i++){
		ans+=i;
		if( num_divisors(ans)>500){
			return ans;
		}
	}

	return -1;
}