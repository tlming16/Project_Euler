/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
/* 
 * author:tlming16
 * emial:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> res(num_people,0);
        queue<int> q;
        for (int i=0;i<num_people;i++) {
            q.push(i);
        }
        int cnt=1;
        while ( !q.empty() && candies>0) {
            int t = q.front();
            q.pop();
            res[t] += min( cnt,candies);
            candies -=cnt;
            if ( candies<=0) break; 
            cnt++;
            q.push( t); 
        }
        return res;
        

    }
};