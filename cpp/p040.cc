#include <cmath>
#include <iostream>

#include <vector>

using namespace std;
//     

void push(vector<int> & v,int n);


int main(){
	const int n=1000000;
	vector<int> vv;
 int i=1;
	while(vv.size()<n){
		push(vv,i);
		i++;

	}
	cout<<vv[0]*vv[9]*vv[99]*vv[999]*vv[9999]*vv[99999]*vv[999999];
    

}

void push(vector<int> &v,int n){
	vector<int> a;
	while(n>0){
		a.push_back(n%10);
		n/=10;
	}

	for(int i=a.size()-1;i>=0;i--){
		v.push_back(a[i]);
	}
}

