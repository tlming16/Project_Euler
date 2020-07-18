/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int hIndex(vector<int>& citations) {
        if (citations.empty()) return 0;
        sort(citations.begin(),citations.end(),greater());
        int N=citations.size();
        int ans=0;
       for(int i=0;i<N;i++){
          if(citations[i]>=(i+1)){
              ans=i+1;
          }
       }
       return ans;

    }
};