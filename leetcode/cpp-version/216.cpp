/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> can={1,2,3,4,5,6,7,8,9};
        vector<int> path;
        vector<vector<int>> res;
        dp(can,0,k,n,0,0,path,res);
        return res;

    }

    void dp(const vector<int> & can,int start,int k,int target,int used,int sum,vector<int> & path,vector<vector<int>> &res ){
        if( sum==target && used==k){
            res.push_back(path);
        }
        if( used>k || sum> target|| start>can.size()-1) {
            return ;
        }
        for( int j=start;j<can.size();j++){
            sum += can[j];
            used+=1;
            path.push_back(can[j]);
            dp(can,j+1,k,target,used,sum,path,res);
            path.pop_back();
            used -=1;
            sum-=can[j];
        }

    }
};