# include <vector>
# include <algorithm>
# include <iostream> 

using namespace std; 


vector<vector<int>> factor_pair(int n){
    vector<vector<int>> ans;
    int cnt=2;
    for(;;){
        int c=0;
        if (n%cnt==0){
            while(n%cnt==0) {
              c++;
              n/=cnt;
            }
        ans.push_back({cnt,c});
        }
        cnt++;
        if(cnt>n) break;
    }
    return ans;

}

void print(const vector<vector<int>> & v){
    
    for(int i=0;i<v.size();i++){
        cout<<v[i][0] <<": "<< v[i][1]<<"  ";
    }
    cout<<endl;

}
int length(const vector<vector<int>> & v){
    int ans =1;
    for(int i=0;i<v.size();i++){
        ans=ans *(1+2*v[i][1]);
    }
    ans =(ans +1)/2;
    return ans;
}
int main(){
    for(int i=2;;i++){
        if (length(factor_pair(i))>1000){
            cout<<i<<endl;
            break;
        }
    }
}
