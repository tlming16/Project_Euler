/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        //sort(s.begin(),s.end());
        //sort(t.begin(),t.end());
        unordered_multiset<char> ss(s.begin(),s.end());
        unordered_multiset<char> tt (t.begin(),t.end());
        return ss==tt;

    }
};