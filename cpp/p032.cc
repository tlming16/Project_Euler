#include<iostream>
#include<set>

using namespace std;

bool get_digit(int,int,int);

int main(){

	const int N=98;

	set<int>  r;
	int sum;
	for(int i=1;i<=N;i++){
		for(int j=i+1;j<9999;j++){
			if(get_digit(i,j,i*j)) r.insert(i*j);
		}
	}



	for(auto x:r){
		sum+=x;}

	cout<<sum<<endl;
}


bool get_digit(int i,int j,int k){
	// i*j=k 

	set<int> s;

  int l=0; // make sure only 9 elements in the set

	while(i!=0){
       if(i%10==0)  return false;
        s.insert(i%10);
        i/=10;
        l++;

	}

	while(j!=0){
       if(j%10==0)  return false;
        s.insert(j%10);
        j/=10;
        l++;

	}

	while(k!=0){
       if(k%10==0)  return false;
        s.insert(k%10);
        k/=10;
        l++;

	}

	if(l!=9)  return false;

	return s.size()==9;



}