/*  
* Solution to Project Euler problem 15
* by mathm   
*/

# include <iostream>

typedef long long int64;

int64 binomial(int m,int n);
int64 compute();

int main(){
	using std::cout;
	using std::endl;

	cout<<compute()<<endl;
}

int64 binomial(int m,int n){
	int64 ans=1;
	for (int i=1;i<=m;i++){
		ans*=(n+1-i);
		ans/=i;
	}
	return ans;

}

int64 compute(){
	const int m=20;
	const int n=40;
	int64 ans=binomial(m,n);
	return ans;
}