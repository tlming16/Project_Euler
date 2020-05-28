# include <iostream> 
# include <unordered_set> 
# include <vector>

using namespace std;

int digit[]={1,1,2,6,24,120,720,5040,40320,362880};

int get_next(int x) {
    int ans =0;
    while (x){
        ans += digit[x%10];
        x/=10;
    }
    return ans;
}

int get_len(int x){
   unordered_set<int> s;
    while(true){
        if (!s.insert(x).second) break;
        x= get_next(x);

    }
    return s.size();

}

int main(){
    int M=1000000;
    int ans=0;
    for(int i=1;i<M;i++) {
        if (get_len(i)==60) {
            ans++;
        }

    }
    cout<<ans<<endl;
}


