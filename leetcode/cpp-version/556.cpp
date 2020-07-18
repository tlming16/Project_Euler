/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int nextGreaterElement(int n) {
        if (n<=10) return -1; 
        vector<int> v= digit(n);
        if (next_permutation(v.begin(),v.end())==false) return -1;
        long long ans=0;
        for(auto x:v){
            ans =ans *10+x;
        }
        if (ans>INT_MAX) return -1;
        return ans;


    }

    vector<int> digit(int n){
        vector<int> v;
        do {
            v.push_back(n%10);
            n/=10;
        } while (n);
        reverse(v.begin(),v.end());
        return v;
    }
};