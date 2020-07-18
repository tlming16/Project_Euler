/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mp;
        for (auto x:nums) mp[x]++;
        int ans=0;
        for (auto x:mp) {
            int v= x.first;
            if ( mp.count(v+1)) {
                ans =max(ans,x.second + mp[v+1]);
            } 
        }
        return ans;

    }
};