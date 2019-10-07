import std.stdio;

int compute(){
	const int n=100;
	int s=0;
	int s2=0;
	for(int i=1;i<=n;i++){
		s+=i;
		s2+=i*i;
	}

	return s*s-s2;
}

void main(){

	printf("%d",compute());
}