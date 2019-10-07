
import std.stdio ;
void main(){

	int sum=0;
	int n=1000;
	for( int i=1;i<n;i++){
		if( i%3==0|| i%5==0){
			sum+=i;
		}
	}
	printf("%d",sum);
}