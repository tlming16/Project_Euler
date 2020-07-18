/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> mp;
        for (auto x:chars){
            mp[x]++;
        }
        int ans=0;
        for (auto x: words){
            if (maste(x,mp)) {
                ans += x.size();
            }
        }
        return ans;

    }

    bool maste( string a,unordered_map<char,int> mp) {
        unordered_map<char,int> ma;
        for ( auto x:a) {
            ma[x]++;
            if ( mp.count(x)==0) return false;
        }
        for (auto x:ma) {
            if (mp[x.first]< x.second) return false;
        }
        return true;
    }
};