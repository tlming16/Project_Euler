import std.stdio;

alias int64 =long ;

bool[] prime_table(int n);
int64 compute();


void main(){

	printf("%d ",compute());
}

bool [] prime_table(int n){

	bool [] res=new bool[] (n+1);
	foreach( ref bool x;res){
		x=true;
	}

	res[0]=res[1]=false;
	for( uint i=2;i<n+1;i++){
		for(uint j=i*i;j<n+1;j+=i){
			if(res[i]) res[j]=false;
		}
	}

	return res;
}
int64 compute(){
	const int N=1_999_999;
	bool [] primes=prime_table(N);

/*
	foreach(x;primes){
		printf("%d",x);
	}
	*/
	int64 ans=0;
	for( uint i=0;i<primes.length;i++){
		if( primes[i]){
			ans+=i;
		}
	}

	return ans;
}