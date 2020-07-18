/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int reverse(int x) {
        long long res=0;
        bool sign =false;
        if (x<0) {
            sign=true;
            if (x<=-2147483648) return 0;
            x=-x;
        }
        long _m=2147483647;
        while (x){
            res=res*10+(x%10);
            if ((res> _m && sign==false) || (res-1>_m && sign==true)){
                return 0;
            }
            x/=10;
            
        }
        if (sign) res=-res;
        return res;

        
    }
};