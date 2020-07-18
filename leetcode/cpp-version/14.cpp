/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        if (strs.empty()) return ans;
        ans= strs[0];
        for (int i=1;i<strs.size();i++){
            ans = common(ans,strs[i]);
        }
        return ans;

        
    }

    string common(string a,string b){
        string s;
        if (a.empty() || b.empty()) return s;
        int i;
        for( i=0;i<a.size() && i<b.size();i++) {
            if (a[i] !=b[i]) {
                break;
            }
        }
        s=a.substr(0,i);
        return s;
    }
};