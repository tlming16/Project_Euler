/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0;
        unordered_map<char,int> s,t;
        for(int i=0;i<secret.size() && i<guess.size();i++){
            if (secret[i]==guess[i]){
                bulls++;
            }else {
                s[secret[i]]++;
                t[guess[i]]++;
            }
        }
        int ans=0;
        for(auto x:s) {
            char f=x.first;
            int  se= x.second;
            if ( t.count(f)) {
                ans += min(se,t[f]);
            }
        }
        return to_string(bulls) +"A" + to_string(ans)+"B";
        


    }
};