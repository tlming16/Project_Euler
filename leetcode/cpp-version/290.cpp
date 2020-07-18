/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char,int> p_mp;
        vector<int> p_v;
        for(int i=0;i<pattern.size();i++){
            if (p_mp.count(pattern[i])) {
                p_v.push_back(p_mp[pattern[i]]);
            } else{
                p_mp.insert({pattern[i],i});
                p_v.push_back(i);
            }
        }
        vector<string> s=split(str);
        unordered_map<string,int> str_mp;
        vector<int> str_v;
        for(int i=0;i<s.size();i++){
            if (str_mp.count(s[i])){
                str_v.push_back(str_mp[s[i]]);
            }else {
                str_mp.insert({s[i],i});
                str_v.push_back(i);
            }
        }
        return  p_v==str_v;
        
    }

    vector<string> split(string str,char c=' '){
        vector<string> res;
        istringstream iss(str);
        string t;
        while(iss>>t){
            res.push_back(t);
        }
        return res;
    }
};