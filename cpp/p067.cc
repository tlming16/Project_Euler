# include <iostream>
# include <vector>
# include <algorithm>
# include <fstream>
# include <sstream>
using namespace std; 

using int64= long long ; 

int64 dp(vector<vector<int64>> & triangle) {
    for( int i= triangle.size()-2;i>=0;i--) {
        for(int j=0;j<triangle[i].size();j++){
            triangle[i][j]+=max(triangle[i+1][j],triangle[i+1][j+1]);

        }
    }
    return triangle[0][0];
} 

int main(){
    ifstream fin("p067_triangle.txt");
    vector<vector<int64>> triangle;
    string s;
    while(getline(fin,s,'\n')){
       istringstream is(s);
       int64 t;
       vector<int64> v;
       while(is>>t){
            v.push_back(t);
       } 
       triangle.push_back(v);
    }
    cout<< dp(triangle)<<endl;

}
