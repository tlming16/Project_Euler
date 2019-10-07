#include<cmath>
#include<iostream>

using namespace std;

typedef long long int  Int64;

Int64 triangle(Int64 n);
Int64 pentagon(Int64 n);
Int64 hexagon(Int64 n);

bool  is_pentagon(Int64 n);
bool  is_hexagon(Int64 n);


int main(){
	Int64 i=0;
	bool flag=false;
	while(true){
		i++;
		Int64 a=triangle(i);
		flag=is_pentagon(a)&&is_hexagon(a);
		if(flag)  {
			cout<<i<<"  "<<a<<endl;

			if(i>285){

				return 0;
			}
		}




	}

	return 0;

	
}

Int64 triangle(Int64 n){
	return (n+1)*n/2;
}

Int64 hexagon(Int64 n){

	return n*(2*n-1);
}

Int64 pentagon(Int64 n){
	return n*(3*n-1)/2;
}

bool is_hexagon(Int64 n){
    //2r*(2r-1)==2n
    // (2r-1)^2<2n<4r^2;
    Int64 r=(sqrt(n*2)+1)/2;

    return r*(2*r-1)==n;


}


bool is_pentagon(Int64 i){

	//  3n*(3*n-1)==6*i;
		//   (3*n-1)^2<6*i<9n^2
		//    3n< sqrt(6i)+1
		//    n< (sqrt(6i)+1)/3;
		//    n>sqrt(6i)/3;
         
		Int64 ii=(sqrt(6*i)+1)/3;

		return ii*(ii*3-1)==2*i;
}