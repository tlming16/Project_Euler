# include <iostream>

int compute();

int main(){

	using std::cout;
	using std::endl;

	cout<<compute()<<endl;
}

int compute(){
	const int SIZE=1001;

	int ans=1;

	for( int i=3;i<=SIZE;i+=2){
		ans+=4*i*i-6*(i-1);

	}

	return ans;
}