import std.stdio;

bool is_prime(ulong n){

	if(n<=1) return false;
	if(n==2) return true;
	if(n%2==0) return false;
	for(ulong i=3;i*i<=n;i+=2){
		if(n%i==0) return false;

	}

	return true;
}

ulong compute(){
	const int number=10001;
	ulong index=1;
	int count=0;
	for(;;){
		index++;
		if(is_prime(index)){
			count++;
			if(count==number){
				return index;
			}
		}
	}
}

void main(){

	printf("%d",compute());
}