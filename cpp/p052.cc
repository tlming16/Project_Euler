#include<vector>
#include<set>
#include<iostream>
#include<algorithm>
using namespace std;


bool equal(vector<int> v,vector<int> v2){

	if(v.size()!=v2.size()) return false;

	sort(v.begin(),v.end());
	sort(v2.begin(),v2.end());
	for(int i=0;i<v.size();i++){
		if(v[i]!=v2[i])   return false;
	}

	return  true;

}

std::vector<int> get(int n){
	vector<int> s;
	  while(n>0){
	  	s.push_back(n%10);
	  	n/=10;

	  }

	  return s;
}


bool is_permuted_multiples(int n){
	vector<int> s1,s2,s3,s4,s5,s6;
	s1=get(n);
	s2=get(n*2);
	s3=get(n*3);
	s4=get(n*4);
	s5=get(n*5);
	s6=get(n*6);

	if(!equal(s1,s2))  return false;
	if(!equal(s2,s3))  return false;
	if(!equal(s3,s4))  return false;
	if(!equal(s4,s5))  return false;
	if(!equal(s5,s6))  return false;


	return true;

}



int main(){

	int i=1;

	while(!is_permuted_multiples(i)){
		i++;
	}
	cout<<i<<endl;
}