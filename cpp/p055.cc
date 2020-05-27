# include<iostream> 
# include <vector>
# include <unordered_set> 
# include <algorithm>
# include <string>
using namespace std; 

bool is_palindromic(const vector<int> & v1){
    vector<int> v2= v1;
    reverse(v2.begin(),v2.end());
    return v1==v2;

}
vector<int> get_digit(int n){
    vector<int> res;
    while (n){
        res.push_back(n%10);
        n/=10;

    } 
    reverse(res.begin(),res.end());
    return res;
}
vector<int> add(const vector<int> & v1,const vector<int> &v2){
    int carry=0;
    vector<int> ans;
    for(int i=v1.size()-1;i>=0;i--){
        int tmp = v1[i] + v2[i] + carry;
        ans.push_back(tmp %10);
        carry =tmp/10;
    }
    if(carry) ans.push_back(carry);
    reverse(ans.begin(),ans.end());
    return ans;
}

bool is_lychrel_number(int n) {
    int flag=true;
    vector<int> v1= get_digit(n);
    int times=0;
    while(true){ 
        vector<int> v2=v1;
        reverse(v2.begin(),v2.end());
        if (is_palindromic(add(v1,v2))) return false;
        v1=add(v1,v2);
        times++;
        if(times>50) break;
    }
    return flag;
}

int main(){
    int ans=0;
    for(int i=1;i<10000;i++){
        if (is_lychrel_number(i)){
            ans+=1;
        }
    }

    cout<<ans<<endl;

}
