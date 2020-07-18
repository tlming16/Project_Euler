/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int ans=INT_MAX;
        int left =0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(sum>=s) {
                ans=min(ans,i-left+1);
                while(sum>=s){
                    ans=min(ans,i-left+1);
                    sum -=nums[left];
                    left=left+1;
                    if(sum>=s){
                        ans=min(ans,i-left+1);
                    }
                }
               

            }
                
        }
        return ans==INT_MAX?0:ans;

    }
};