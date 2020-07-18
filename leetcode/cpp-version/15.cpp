/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        const int n = nums.size();
        vector<vector<int>> res;
        if (nums.size() < 3) {return res;}
        sort(nums.begin(), nums.end());
        for (int i = 0 ; i < n; ) {
            int left = i + 1, right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    res.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    ++left, --right;
                    while (left < right && nums[left] == nums[left-1]) { ++left; }
                    while (left < right && nums[right] == nums[right+1]) { --right; }
                } else if (sum < 0) {
                    ++left;
                    while (left < right && nums[left] == nums[left-1]) { ++left; }
                } else {
                    --right;
                    while (left < right && nums[right] == nums[right+1]) { --right; }
                }
            }
            ++i;
            while (i < n && nums[i] == nums[i-1]) {++i;}
        }
        return res;
    }
};