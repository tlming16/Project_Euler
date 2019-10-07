# include <iostream>

int fifth_power_digit_sum(int x);

int compute();


int main(){

	using std::cout;
	using std::endl;

	cout<<compute()<<endl;

}


int fifth_power_digit_sum(int x){
	int ans=0;

	while(x>=1){
		int m=x%10;
		ans+=m*m*m*m*m;
		x/=10;
	}
	return ans;
}


int compute(){
	int ans=0;
    const int N=1000000;
	for(int i=2;i<=N;i++){
		if( i==fifth_power_digit_sum(i)){
			ans+=i;
		}

	}

	return ans;
}