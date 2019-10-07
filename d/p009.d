import std.stdio ;

int compute(){

	const int n=1_000;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<n;j++){
			int c=n-i-j;
			if( i*i+j*j==c*c) return i*j*c;//found
		}
	}

	return -1;//  not found 

}


void main(){

	printf("%d\n",compute());
}