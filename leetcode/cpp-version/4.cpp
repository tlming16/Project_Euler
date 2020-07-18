/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),back_inserter(res));
        int n= res.size();
        if (res.size()%2==1) 
            return res[res.size()/2];
        else{
            return (static_cast<double>(res[n/2]) + static_cast<double>(res[n/2-1]))/2;
        }
        
    }
};