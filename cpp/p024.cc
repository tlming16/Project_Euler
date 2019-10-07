# include <iostream>
# include <vector>
# include <algorithm>

typedef long long Int;
Int compute();

int main(){

	using std::cout;
	using std::endl;

	cout<<compute()<<endl;
}

Int compute(){
	std::vector<int> a={0,1,2,3,4,5,6,7,8,9};
	const int N=999999;
	for( int i=0;i<N;i++){
		if( !std::next_permutation(begin(a),end(a))) {
			break;
		}
	}

	Int ans=0;
	for (int c:a){
		ans=ans*10+c;
	}

	return ans;

}