/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
    public:
     int maxScore(vector<int>  &cardPoints, int k) {
        int len = cardPoints.size();
        vector<int>pre(len+1,0) ;
        for(int i = 0;i < len;i++){
            pre[i+1] = cardPoints[i] + pre[i];
        }
        int ans = -1;
        for(int i = 0;i <= k;i++){
            ans = max(ans, pre[i] + pre[len] - pre[len-k+i]);
        }
        return ans;
    }
};