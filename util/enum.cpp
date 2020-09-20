# include <iostream> 
# include <set>
# include <utility> 

using namespace std;

int main(){
  set<pair<int,int>> s1;
  set<pair<int,int>> s2;

// S1={(x,y)| x^2+y^2<=1,x\in Z,y\in Z}
  for (int i=-1;i<=1;i++){
    for(int j=-1;j<=1;j++){
      if (i*i+j*j<=1){
        s1.insert(make_pair(i,j));
      }
      
    }
  }
  // S2={(x,y)| -2<=x<=2,-2<=y<=2,x\in Z,y\in Z}
  for ( int x=-2;x<=2;x++){
    for( int y=-2;y<=2;y++){
      s2.insert(make_pair( x,y));
    }
  }
  set<pair<int,int>> s3;
  // S3 ={A| A=B+C ,B\in S1,C\in S2}

  for( auto x:s1){
    for( auto y:s2) {
      s3.insert(make_pair(x.first+y.first,x.second+y.second));
    }
  }
  cout<<s3.size()<<endl;


}