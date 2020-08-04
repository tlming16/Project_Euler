# include<iostream>
# include<vector>
# include<algorithm> 
# include<utility> 

using namespace std;

vector<vector<int>> merge(vector<vector<int>> & m) {
    vector<vector<int>> ans;
    sort( m.begin(),m.end(),
    [](const vector<int> &a,const vector<int> & b){
        if (a[0]!=b[0]){
            return a[0]<b[0];
        }
        return a[1]<b[1];
    });
    vector<int> cur = m[0];
    for( int i=1;i<m.size();i++){
        if ( cur[1]>= m[i][0]  ) {
            cur[1]= max(cur[1],m[i][1]);
        }else {
            ans.push_back(cur);
            cur = m[i];
        }
    }
    ans.push_back( cur);
    return ans;
}
int main(){
    int L;
    int m;
    cin>>L>>m;
    vector<vector<int>> res;
    while(m>0){
        int l,r;
        cin>>l>>r;
        res.push_back(vector<int>{l,r});
        m--;
    }
    auto s = merge(res);
    int ans=0;
    for(int i=0;i<s.size();i++){
        ans += s[i][1]-s[i][0]+1;
    }
    cout<<(L+1)-ans;
    return 0;
}
