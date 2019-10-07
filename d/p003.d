import  std.stdio;

ulong is_prime(ulong n){
	if( n<=1) return false;
	if(n==2) return true;
	if(n%2==0)  return false;

	for( ulong i=3;i*i<=n;i+=2){
		if( n%i==0) return false;
	}

	return true;
}

ulong largest_factor(ulong n){
	int i=2;
	while( !is_prime(n)){
		if( n%i==0) {
			while( n%i==0) n/=i;
		}
		i++;
	}

	return n;
}

void main(){

	const ulong n=600851475143;
	printf( "%d\n",largest_factor(n));
}