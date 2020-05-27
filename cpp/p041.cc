/*
see from https://projecteuler.net/problem=41

We shall say that an n-digit number is pandigital 
if it makes use of all the digits 1 to n exactly once.
For example, 2143 is a 4-digit pandigital and is also prime.
What is the largest n-digit pandigital prime that exists?
*/

# include <vector>
# include <string>
# include <algorithm> 
# include <iostream> 
using namespace std;
class pandigital_prime{
    public:
    int n;// 
    vector<int>  digit_v;
    bool is_prime(int x) {
        if (x<=1) return false ;
        if(x==2||x==3||x==5) return true;
        if(x%2==0 || x%3==0 ) return false;
        for(int i=3;i*i<=x;i+=2){
            if( x%i==0) return false;
        }
        return true;
    }
    bool is_right(vector<int> & res) {
        bool flag=false;
        do { 
            int num =get_num();
            if(is_prime(num)) {
                res.push_back(num);
                flag=true;

            }
        } while(next_permutation(digit_v.begin(),digit_v.end()));
        return flag;

    }

    int get_num() {
        int n=0;
        for(auto x:digit_v){
            n=n*10+x;
        }
        return n;
    } 
    void reset(int n){
        this->n=n;
        digit_v.clear();
        for(int i=1;i<=n;i++){
            digit_v.push_back(i);
        }

    }

};
int main(){
    pandigital_prime pm;
    vector<vector<int>> res;
    for( int i=9;i>1;i--) { 
        vector<int> ans;
        pm.reset(i);
        if (pm.is_right(ans)){
            res.push_back(ans);

        }
    } 
    int ans=-1;
    for(auto x:res){
        for( auto v:x){
            ans=max(ans,v);
        }

    }
    cout<<ans<<endl;

}
