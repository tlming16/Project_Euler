/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    bool canWinNim(int n) {
        if (n<4) return true;
        return n%4!=0;

    }
};