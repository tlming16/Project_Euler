#include<iostream>
#include<cmath>
using namespace std;
typedef long long Int64;

Int64  pentagen_num(int i){
	return i*(3*i-1)/2;
}
bool inv_pentagen(Int64 i);

	int main(){

		const int N=100000;
	
		for(int i=1;;i++){
			for(int j=i-1;j>0;j--){

				Int64 a=pentagen_num(i);
				Int64 b=pentagen_num(j);
				Int64 diff=a-b;
				Int64 sum=a+b;

				if(inv_pentagen(diff)&&inv_pentagen(sum)){
					cout<<diff<<endl;

					return 0;
					
				}

			}

		}

		
	}



	bool inv_pentagen(Int64 i){

		//  3n*(3*n-1)==6*i;
		//   (3*n-1)^2<6*i<9n^2
		//    3n< sqrt(6i)+1
		//    n< (sqrt(6i)+1)/3;
		//    n>sqrt(6i)/3;

		int ii=(sqrt(6*i)+1)/3;

		return ii*(ii*3-1)==2*i;


	}