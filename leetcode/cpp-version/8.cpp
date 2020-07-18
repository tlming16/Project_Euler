/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int myAtoi(string str) {
       int sign =false;
       while (!str.empty() && isblank(str[0])) str=str.substr(1);
       if(str.empty()) return 0;
       if (str[0]=='-') sign=true;
       string ans;
       for(int i=0;i<str.size();i++){
           if (i==0 &&( str[i]=='+'|| str[i]=='-')) continue;
           if ( str[i]<'0' || str[i]>'9') break;
           ans.push_back(str[i]);
       }
       if (ans.empty()) return 0;
       long long res=0;
       for(int i=0;i<ans.size();i++){
           res =res*10+(ans[i]-'0') ;
           if (sign)  if (-1 * res<=INT_MIN) return INT_MIN;
           if (res>INT_MAX) return INT_MAX;
       }
       if (sign) return -1* res;
       return res;

        
        
    }
   
};