# include <iostream>
# include <vector>

int compute();

int main(){


	using std::cout;
	using std::endl;

	cout<<compute()<<endl;
}

int compute(){
	const int TOTAL=200;
	std::vector<int> ways(TOTAL+1,0);
	ways[0]=1;
	for (int coin:{1,2,5,10,20,50,100,200}){
		for( int i=0;i<ways.size()-coin;i+=1){
			ways[i+coin]+=ways[i];
		}
	}

	return ways.back();
}