/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        sort(C.begin(),C.end());
        sort(D.begin(),D.end());
        unordered_map<int,int> sum_cnt1,sum_cnt2;
        for(auto x:A){
            for(auto y:B){
                sum_cnt1[x+y]++;
            }
        }

        for(auto x:C){
            for(auto y:D){
                sum_cnt2[x+y]++;
            }
        }
        int ans=0;
        for (auto x:sum_cnt1){
            if(sum_cnt2.count(-x.first)){
                ans += x.second * sum_cnt2[-x.first];
            }
        }
        return ans;

    }
};