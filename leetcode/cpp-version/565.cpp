/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int ans=0;
        if (nums.empty()) return ans;
        for (int i=0;i<nums.size();i++) {
            int d=0;
            int k=i;
            if (nums[i]<0) continue;
            while ( nums[k]>=0) {
                d++;
                int v=nums[k];
                nums[k]=-1;
                k=v;
                
            }
            ans=max(ans,d);
        }
        return ans;

    }
};