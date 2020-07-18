/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int findNthDigit(int n) {
        long long bit = 1, p = 9;
        while(n - bit * p > 0){
            n -= p * bit;
            bit++;
            p *= 10;
        }

        int num = pow(10, bit - 1) + (n-1) / bit;
        int pos = n % bit;
        pos = pos == 0 ? bit : pos;

        int t = pow(10, bit - pos);
        return num / t % 10;
    }
};