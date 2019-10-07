#include<algorithm>
#include<iostream>
#include<vector>


using namespace std;


void print_vector(const vector<int> & );

long long  get_num(const vector<int> &);

int main(){

	vector<int>  a={0,1,2,3,4,5,6,7,8,9};
	// A=d1d2d3d4d5d6d7d8d9d10
	long long sum=0;

	while(next_permutation(a.begin(),a.end())){
		if(a[0]==0) continue;
		 int n1=a[1]*100+a[2]*10+a[3];
		 int n2=a[2]*100+a[3]*10+a[4];
		 int n3=a[3]*100+a[4]*10+a[5];
		 int n4=a[4]*100+a[5]*10+a[6];
		 int n5=a[5]*100+a[6]*10+a[7];
		 int n6=a[6]*100+a[7]*10+a[8];
		 int n7=a[7]*100+a[8]*10+a[9];
		 int i=0;
		 i=n1%2+n2%3+n3%5+n4%7+n5%11+n6%13+n7%17;
		 if(i==0)   {sum+=get_num(a);
		 	print_vector(a);

		 }

	}

	cout<<sum<<endl;


}


void print_vector(const vector<int> & v){
	for(auto x:v)
		cout<<x;

	cout<<endl;
}

long long  get_num(const vector<int> &v){
	long long  s=v[0];

	for(int i=1;i<v.size();i++){
		s=s*10+v[i];

	}

	return s;
}