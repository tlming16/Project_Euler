#include<iostream>
#include<vector> 
using namespace std;



int get_next_circular_num(int n);

int get_prime_number(bool * table,int n);

bool is_prime(int n);






int main(){

  
  #if 0
	const int  N=1000;

	for(int i=1;i<N;i++){
		if(is_prime(i)){
			const int k=i;
			int r=i;
			bool flag=true;
			while(k!=get_next_circular_num(r)&& flag){
				r=get_next_circular_num(r);
				if(!is_prime(r)){ flag=false; break;}
			}

			if(flag)  cout<<i<<endl;
		}
	}
#endif 
	const int N=1000000;
	bool a[N];
	get_prime_number(a,N);

	for(int i=2;i<N;i++){
		if(a[i]){
			const int k=i;
			int r=get_next_circular_num(i);
			while(k!=r){ 
				if(a[r]){
				     r=get_next_circular_num(r);
			     }
			     else  break;
			}

			if(k==r)  cout<<i<<endl;

		}
	}


	


}

bool is_prime(int n){
	// only consider  number between 2 and 1000000
	if(n>1000000)  return false;
	if(n<2)  return false;
	if(n==2) return true;

	if(n%2==0)  return false;

	for(int j=3;j*j<=n;j++){
		if(n%j==0)  return false;
	}

	return true;
}

int get_prime_number(bool * table,int n){
	// 
	table[0]=table[1]=false;

	for(int i=2;i<n;i++) table[i]=true;
    for(int i=2;i*i<=n;i++){
    	if(table[i]){
    	for(int j=i+i;j<=n;j+=i){
    		 table[j]=false;
    	}
       }
    }

    return n;
}


int get_next_circular_num(int n){

	if(n>1000000)  return 0;
	if(n<10)  {return n;};
	if(n<100){
		int a=n%10; int b=n/10;
		return a*10+b;
	}
	//   n=a0a1...ak   
	//  the next is a1a2...aka0;
    std::vector<int> v;

    while(n>0){
    	v.push_back(n%10);
    	n/=10;
    }
 int nn=v.size(); 
 int rr=v[nn-1];
 int next=v[nn-2];

 for(int i=nn-3;i>=0;i--){
 	next=next*10+v[i];
 }
 next=next*10+rr;

 

 return next;



}