/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int amin=m;
        int bmin=n;
        for (auto x: ops) {
            amin=min(amin,x[0]);
            bmin=min(bmin,x[1]);
        }
        return amin*bmin;

    }
};