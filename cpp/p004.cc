/*
* Solution to project Euler problem 4
* by mathm
*/

#include<iostream>
#include<memory>
#include<vector>
class p004{

public:
	p004()=default;

	int compute() const;
	bool equal(int x,int y) const;
	int max(int a,int b) const;

};

bool p004::equal(int x,int y) const {
	int a=x*y;
	std::vector<int> b;
	while(a>=1){
		b.push_back(a%10);
		a/=10;
	}
	for (int i=0;i<b.size()/2;i++){
		if (b[i]!=b[b.size()-1-i]){
			return false;
		}
	}
	return true;
}

int p004::max(int a,int b) const {
	if (a>b)  return a;
	return b;
}

int p004::compute() const {
	int ans=0;
	for(int i=100;i<1000;i++){
		for(int j=0;j<=1000;j++){
			if( this->equal(i,j)){
				ans=this->max(ans,i*j);
			}
		}
	}
	return ans;
}


int main(){
	using std::cout;
	using std::endl;

	cout<<std::unique_ptr<p004>(new p004)->compute()<<endl;

}