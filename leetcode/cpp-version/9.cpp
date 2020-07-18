/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    bool isPalindrome(int x) {
        string n_x= to_string(x);
        string rn_x=n_x;
        reverse(rn_x.begin(),rn_x.end());
        return n_x==rn_x;

        
    }
};