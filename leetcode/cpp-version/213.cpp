/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int rob(vector<int>& nums) {
        int n= nums.size();
        if (n==0) return 0;
        if (n==1) return nums[0];
        bool first=false;
        unique_ptr<int[]> m(new int[n+2]);
        int * dp = m.get()+2;
        dp[-2]=0;
        dp[-1]=0;
        for (int i=0;i<n-1;i++){
            dp[i]=max(dp[i-2]+ nums[i],dp[ i-1]);
        }
        int ans = dp[n-2];
        dp[0]=0;
        for (int i=1;i<n;i++){
            dp[i] =max( dp[i-2]+nums[i],dp[i-1]);
        }
        ans =max( ans,dp[n-1]);
        return ans;
       


    }
};