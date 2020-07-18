/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto x:s) mp[x]++;
        vector<pair<char,int>> v;
        for( auto x:mp) { v.push_back(x);}
        sort(v.begin(),v.end(),[](pair<char,int> a,pair<char,int> b){
            if ( a.second ==b.second) return a.first<b.first;
            return a.second >b.second;
        });
        string ans;
        for (int i=0;i<v.size();i++){
            auto w= v[i];
            ans += string(w.second,w.first);
        }
        return ans;

    }
};