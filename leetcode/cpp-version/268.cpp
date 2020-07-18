/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int>s;
        for(auto x:nums){
            s.insert(x);
        }
        int ans =-1;
        for(int i=0;i<nums.size()+1;i++){
          if(s.count(i)==0) {
              ans=i;
              break;
          }
        }
        return ans;
    }
};