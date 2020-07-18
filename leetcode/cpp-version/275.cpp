/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int hIndex(vector<int>& citations) {

    
    int N=citations.size();
    int ans=0;
    for(int i=citations.size()-1;i>=0;i--){
        if( citations[i]>=(N-i)){
            ans =N-i;
        }
    }
    return ans;
    }
};