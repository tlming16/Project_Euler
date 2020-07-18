/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    bool checkRecord(string s) {
        int a=0;
        for(int i=0;i<s.size();i++) {
            if (s[i]=='A') {
                a++;
            } else if (s[i]=='L') {
                if ( i-1>=0 &&s[i-1]=='L' && i+1<s.size() && s[i+1]=='L') {
                    return false;
                }
            }

        }
        return a<=1;

    }
};