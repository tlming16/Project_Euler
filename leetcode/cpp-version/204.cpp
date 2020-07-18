/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int countPrimes(int n) {
        using int64 =int64_t;
        vector<bool> dp(n+2,true);
        dp[0]=dp[1]=false;
        dp[2]=true;
        for (int64 i=2;i<n;i++){
            if (dp[i]){
                for (int64 j=i*i;j<n;j+=i) {
                    dp[j]=false;
                }
            }
        }
        int ans=0;
        for(int i=2;i<n;i++){
            if (dp[i]) ans++;
        }
        return ans;

    }
};