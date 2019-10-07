import std.stdio;

bool equal(int x,int y){
	int a=x*y;
	int [] d;
	while( a>=1){
		d~= a%10;
		a/=10;
	}
	for( int i=0;i<d.length/2;i++){
		if( d[i]!= d[d.length-1-i]) return false;
	}

	return true;
}

int max(int a,int b){
	return a>b?a:b;
}

void main(){
	int ans=0;
	const int n=1000;
	for(int i=100;i<n;i++){
		for(int j=0;j<=n;j++){
			if( equal(i,j)){
				ans=max(ans,i*j);
			}
		}
	}

	printf("%d",ans);
}