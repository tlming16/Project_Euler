/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
    public:
     bool canPartition(vector<int> & nums) {
        int len = nums.size();
        if (len == 0) {
            return false;
        }
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        if ((sum & 1) == 1) {
            return false;
        }
        int target = sum / 2;

        vector<bool> dp(target+1,false);
        dp[0] = true;
        sort(nums.begin(),nums.end());
        for(auto x:nums){
            if (x<= target){
                dp[x]=true;
            }
        }
        for (int i = 0; i < len; i++) {
            for (int j = target; j>=0; j--) {
                if (dp[target]) {
                    return true;
                }
                if (j>=nums[i])
                    dp[j] = dp[j] || dp[j - nums[i]];
                if (j+nums[i]<=target)
                    dp[j+nums[i]] = dp[j+nums[i]] || dp[j];
            }
        }
        return dp[target];
    }
};