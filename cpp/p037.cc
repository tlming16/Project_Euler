#include<vector>
#include<iostream>
#include<cmath>
using namespace std;

typedef long long int Int;

bool is_prime(int n);

bool truncatable_prime(int n);

int main(){
    int sum=0;
	int r=0;
	int i=11;
	while(r<11){
		if(truncatable_prime(i))
			{
				r++;
				sum+=i;

				cout<<i<<endl;
			}

		i++;
	}

	cout<<sum<<endl;

}


bool is_prime(int n){
	if(n<2)  return false;
	if(n==2)  return true;
	if(n%2==0)  return false;
	for(int i=3;i*i<=n;i+=2)  {
		if(n%i==0)  return false;
	} 

	return true;
}

bool truncatable_prime(int n){
	if(n<10)  return false;
	vector<int> v;
	int k=n;
	while(k>0){
		if(!is_prime(k))  return false;
		v.push_back(k%10);
		if(k%10==0)  return false;
		k/=10;
	}
    int size=v.size();
    k=n;
    for(int i=size-1;i>0;i--){
    	k=k%(int)pow(10,i);
    	if(!is_prime(k))  return false;
    }
    


	return true;



}