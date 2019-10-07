# include <unordered_map>
# include <iostream>

int max(int x,int y);

int reciprocal_cycle_len(int );

int compute();

int main(){

	using std::cout;
	using std::endl;

	cout<<compute()<<endl;
}


int max(int x,int y){
	if (x>y) return x;
	return y;
}

int reciprocal_cycle_len(int n){
	std::unordered_map<int,int>seen;
	int x=1;
	int index=1;
	while(true){
		if (seen.find(x)!=seen.end()) {
			return index-seen[x]+1;
		}
		else {
			seen[x]=index;
			x=x*10%n;
		}

		index++;
	}
}


int compute(){
	int ans=0;

	const int N=1000;
	for(int i=1;i<=N;i++){
		ans=max(ans,reciprocal_cycle_len(i));
	}

	return ans;
}