/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int,int> mp;
        for ( auto x:dominoes) {
            int v1=min(x[0],x[1]);
            int v2= x[0]+x[1]-v1;
            mp[10*v1+v2]++;
        }
        int ans=0;
        for (auto x:mp) {
            ans += (x.second-1)*x.second/2;
        }
        return ans;

    }
};