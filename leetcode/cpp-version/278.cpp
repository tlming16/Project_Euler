/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1;
        int r=n;
        int mid;
        while(l<r){
            mid =(l>>1)+(r>>1); 
            if (isBadVersion(mid)) {
               r=mid;
            } else {
                l=mid+1;

            }
        }
        return r;
        
    }
};