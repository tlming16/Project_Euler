/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        if (height.size()<2) return 0;
        int ans=0;
        int left =0;
        int right =height.size()-1;
        for (;left<right;){
            int  v= (right-left) * min(height[right],height[left]);
            ans =max(ans,v);
            if ( height[left]<height[right]) {
                left++;
            }else {
                right--;
            }
        }
        return ans;
    }
};