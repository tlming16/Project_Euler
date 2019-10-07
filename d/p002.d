import std.stdio;

int compute(){

	int sum=0;
	int x=1;
	int y=2;
	const int N=4000000;
	while(x<N){
		if( x%2==0) sum+=x;
		int z=x+y;
		x=y;
		y=z;
	}

	return sum;
}

void main(){

	printf("%d\n",compute());
}