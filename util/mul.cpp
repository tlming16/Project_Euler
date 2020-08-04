#include <iostream>
# include <vector>
# include <algorithm>
using namespace std; 
vector<int> add( const vector<int> &a,const vector<int> &b){
    int m = a.size();
    int n= b.size();
    vector<int> res;
    int carry=0;
    while( m>=1 || n>=1) {
        int t= carry;
        if (m >=1) {
            t+= a[m-1];
            m--;
        }
        if (n>=1){
            t+= b[n-1];
            n--;
        }
        res.push_back( t%10);
        carry =t/10;
    }
    if ( carry) {
        res.push_back( carry);
    }
        
    reverse(res.begin(),res.end());
    return res;
}
vector<int> mul( const vector<int> & a,int m){
    vector<int> res;
    int carry=0;
    for(int i=a.size()-1;i>=0;i--){
        int t = carry + a[i]*m;
        res.push_back(t%10);
        carry= t/10;
    }
    while( carry) {
        res.push_back( carry%10);
        carry/=10;
    }
    reverse( res.begin(),res.end());
    return res;
}

int main(){
    int N;
    cin>>N;
    vector<int> ans(1,0);
    vector<int> res(1,1);
    for(int i=1;i<=N;i++){
        res=mul( res,i);
        ans=add(ans,res);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    return 0;
}
    