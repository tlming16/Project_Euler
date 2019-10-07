import std.stdio;

int gcd(int a,int b){
	if(b==0) return a;

	return gcd(b,a%b);
}

int compute() {
	int ans=1;
	int n=21;
	for(int i=1;i<n;i++){
		ans*=i/gcd(i,ans);
	}
	return ans;
}

void main(){

	printf("%d",compute());
}
