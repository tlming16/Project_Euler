/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    struct item{
        int v;
        int index;
    };
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<item> v(nums.size());
       for(int i=0;i<v.size();i++){
           v[i]={nums[i],i};
       }
       sort(v.begin(),v.end(),[](const item & a,const item & b){
           return a.v<b.v;
       });
       int l=0;
       int r= v.size()-1;
       while(l<r){
           if (v[l].v+v[r].v==target){
               return {v[l].index,v[r].index};
           }else if (v[l].v+v[r].v>target){
               --r;
           }else  {
               ++l;
           }
       } 
         return {-1,-1};
    }
     
};