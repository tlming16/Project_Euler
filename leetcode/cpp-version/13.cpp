/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        mp['I']=1;mp['V']=5;mp['X']=10;
        mp['L']=50;mp['C']=100;mp['D']=500;
        mp['M']=1000;
        int ans=0;
        for (int i=0;i<s.size();) {
            if (s[i]=='I') {
                if ( i+1<s.size() && s[i+1]=='V') {
                        ans +=4;
                        i+=2;
                    } 
                else if (i+1<s.size() &&s[i+1]=='X') {
                        ans+=9;
                        i+=2;
                    }
                else {
                    ans +=1;
                    i++;

                    }
            
            }else if ( s[i]=='X') {
                if ( i+1<s.size() && s[i+1]=='L') {
                    ans +=40;
                    i+=2;
                }else if (i+1<s.size()&&s[i+1]=='C'){
                    ans +=90;
                    i+=2;
                }else {
                    ans +=10;
                    i++;
                }
            }else if (s[i]=='C') {
                if (i+1<s.size() && s[i+1]=='D') {
                    ans+=400;
                    i+=2;
                }else if (i+1<s.size() && s[i+1]=='M'){
                    ans+=900;
                    i+=2;
                }else {
                    ans+=100;
                    i++;
                }
            }else {
                ans += mp[s[i]];
                i++;
            }

        }
        return ans;
        
    }
};