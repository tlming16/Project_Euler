/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> ans;
        for(int i=1;i<=n;i++){
            for(int j=1;j<i;j++){
                if (gcd(i,j)==1) {
                    ans.push_back(pair_to_string(j,i));
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }

    int gcd(int x,int y){
        int r=x%y;
        while( r!=0) {
            x=y;
            y=r;
            r= x%y;
        }
        return y;
    }
    string pair_to_string(int x,int y){
        return to_string(x) +"/" +to_string(y);
    }
};