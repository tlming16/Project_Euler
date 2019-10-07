/*  
* Solution to Project Euler problem 9
* by mathm   
*/

#include <iostream>
int compute(){
	const int N=1000;
	for(int i=1;i<N;i++){
		for(int j=i+1;j<N;j++){
			int c=N-i-j;
			if( i*i+j*j==c*c) return i*j*c;
		}
	}
}


int main(){

	using std::cout;
	using std::endl;
	cout<<compute()<<endl;
}