/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=0;
        int pos;
        unordered_map<char,int> m_set;
        for(int i=0;i<s.size();i++){
            if(m_set.insert({s[i],i}).second) {
                res =max(res,m_set.size());
            }else {
                pos = m_set[s[i]];
                m_set.clear();
                for(int ii=pos+1;ii<=i;++ii)
                    m_set[s[ii]]=ii;
            }
        }
            return res;
    }
        
    

private:
    int max(int a,int b){
        if (a>b) return a;
        else return b;
    }
    
};