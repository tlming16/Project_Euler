# include <iostream>
# include <vector>
int compute();

int main(){
	using std::cout;
	using std::endl;


	cout<<compute()<<endl;
}

int compute(){
    const int N=10000;
	std::vector<int> divisornum(N,0);
	divisornum[1]=1;

	for( int i=1;i<divisornum.size();i++){
		for (int j=2*i;j<divisornum.size();j+=i){
			divisornum[j]+=i;
		}
	}
	int ans=0;

	for(int i=1;i<divisornum.size();i++){
		int j=divisornum[i];
		if( j!=i &&j<divisornum.size() &&divisornum[j]==i){
			ans+=i;
		}
	}
  return ans;
}