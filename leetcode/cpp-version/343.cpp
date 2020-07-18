/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int integerBreak(int n) {
        
        vector<int> v(n+4);
        v[0]=1;
        v[1]=1;
        v[2]=1;
        v[3]=2;
        v[4]=4;
        if(n<=4) return v[n];
        for(int i=3;i<=n;i++){
            v[i]=max(max(v[i-3]*3,v[i-2]*2),v[i-1]);
        }
        return v[n];

    }
};