/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        int ans=0;
        for (int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k= nums.size()-1;
            for ( ;j<k;) {
                int sum = nums[i] +nums[j]+nums[k];
                if ( abs(sum -target)<diff) {
                    diff = abs(sum-target);
                    ans =sum;
                }
                if (sum== target) {
                    return target;
                }
                else if (sum < target) {
                    j++;
                }else {
                    k--;
                }
            }
        }
        return ans;

    }
};