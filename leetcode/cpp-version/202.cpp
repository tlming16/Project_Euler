/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    bool isHappy(int n) {
        if (n==1) return true;
        unordered_set<int> has_seen;
        while(n!=1){
             n=square_sum_digit(n);
             if (n==1) return true;
             if(has_seen.count(n)) return false ;
             has_seen.insert(n);

        }
        return false;
    }

    int square_sum_digit(int s){
        int sum=0;
        while(s){
            int d= (s%10);
            sum+= d*d;
            s/=10;
        }
        return sum;
    }
};