/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if (mp[nums[i]]==1){
                res.push_back(nums[i]);
            }
        }
        return res;
        

    }
};