/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        if (nums.empty()|| nums.size()==1) return nums;
        sort(nums.begin(), nums.end());
        int N = nums.size();
        vector<int> dp(N, 1);
        vector<int> path(N, -1);
        int max_len = 0;
        int max_ind = -1;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] % nums[j] == 0) {
                    if (dp[i] < dp[j] + 1) {
                        dp[i] = dp[j] + 1;
                        path[i] = j;
                    }
                }
            }
            if (dp[i] > max_len) {
                max_len = dp[i];
                max_ind = i;
            }
        }
        vector<int> res;
        int ind = max_ind;
        while (ind != -1) {
            res.push_back(nums[ind]);
            ind = path[ind];
        }
        reverse(res.begin(), res.end());
        return res;
    }
};