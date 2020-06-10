/*
*   see from 
*  https://leetcode-cn.com/problems/multiply-strings/solution/zi-fu-chuan-xiang-cheng-by-mathm-2/
*
*/
class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int> a(num1.size());
        vector<int> b(num2.size());
        for(int i=0;i<num1.size();i++) a[i] = num1[i]-'0';
        for(int i=0;i<num2.size();i++) b[i] = num2[i]-'0';
        vector<int> res;
        res=mul(b,a);
        string ans(res.size(),'0');
        for(int i=0;i<res.size();i++){
            ans[i]='0'+ res[i];
        }
        return ans;
    
    }
    vector<int> mul(const vector<int> a,const vector<int> &b) {
        vector<int> res(a.size()+b.size(),0);
        for(int i=b.size()-1;i>=0;i--){
            vector<int> m = mul(a,b[i]);
            for (int j=i+1;j<=b.size()-1;j++) m.push_back(0);
            res=add(res,m);
        }
        while( !res.empty() && res[0]==0) {
            res.erase(res.begin());
        }
        if( res.empty()) return {0};
        return res;
        
       
    }
    vector<int> mul (const vector<int> & a,int b){
        vector<int> m( a.size(),0);
        if (b==0) return m;
        if (b==1) return a;
        int carry=0;
        for(int i=a.size()-1;i>=0;i--){
            int v = carry + b*a[i];
            carry = v/10;
            m[i]=v%10;
        }
        if (carry) m.insert(m.begin(),carry);
        return m;
    }
    vector<int> add(const vector<int> & a,const vector<int> & b){
        vector<int> res;
        int carry=0;
        for(int i=0;i<a.size() || i<b.size();i++){
            int v =0;
            if (i<a.size()) v+= a[a.size()-1-i];
            if (i<b.size()) v+= b[b.size()-1-i];
            carry=carry + v;
            res.push_back( carry %10);
            carry/=10;
        }
        if (carry) res.push_back(carry);
        reverse(res.begin(),res.end());
        return res;
    }
};