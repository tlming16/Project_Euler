#include<iostream>
using namespace std;

// a+b+c=p
// a*a+b*b=c*c
//  a+b>c;

// a<b<c 

int num_sol(int p);
int main(){

	const int n=1000;
	int a=0;
	int pos=0;

	for(int i=3;i<=n;i++){
		if(a<num_sol(i)) {
			a=num_sol(i);
			pos=i;
		}
	}

	cout<<pos<<endl;
}


int num_sol(int p){
	int s=0;

	for(int i=1;i<p/3;i++)
		for(int j=i+1;j<(p-i)/2;j++)
			if(i*i+j*j==(p-i-j)*(p-i-j)) s++;


	return s;
}