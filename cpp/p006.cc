/*  
* Solution to Project Euler problem 6
* by mathm   
*/


#include<iostream>

 int compute();

 int main(){
 	using std::cout;
 	using std::endl;

 	cout<<compute()<<endl;
 }

 int compute(){
 	const int N=100;
 	int s=0;
 	int s2=0;
 	for(int i=1;i<=N;i++){
 		s+=i;
 		s2+=i*i;
 	}
 	return s*s-s2;
 }