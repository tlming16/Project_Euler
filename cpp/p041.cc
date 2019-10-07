#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;


bool is_prime(int n);

int vec_num(const vector<int> & v);

bool has_prime(const vector<int> &a,int n,int * );

int main(){

	const vector<int> a={1,2,3,4,5,6,7,8,9};
	int n=9;
	int r;
	while(!has_prime(a,n,&r)){
		n--;
	}

	cout<<r<<endl;


}

bool is_prime(int n){
	if(n<2) return false;
	if(n==2) return true;
	if(n%2==0)  return false;
	for(int i=3;i*i<n;i+=2){
		if(n%i==0)  return false;
	}

	return true;
}

int vec_num(const std::vector<int> & v){

	int next=0;
	for(int i=0;i<v.size();i++){
		next=next*10+v[i];
	}

	return next;
}

bool has_prime(const std::vector<int> &v,int n,int *result){
	std::vector<int> vv(v.begin(),v.begin()+n);
     int  a=-987654321;
	while(next_permutation(vv.begin(),vv.end())){
		int b=vec_num(vv);
		if(is_prime(b))  {   if(a<b) a=b; 
		}
	}

	if(a>-987654321) { *result=a;  return true;}

	return false;
}
