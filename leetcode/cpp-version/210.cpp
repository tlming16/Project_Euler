/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> in_degree(numCourses,0);
        for(int i=0;i<prerequisites.size();i++){
            in_degree[prerequisites[i][0]]++;
        }
        vector<int> v;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<in_degree.size();i++) {
            if ( in_degree[i]==0) {
                pq.push(i);
            }
        }
        while (!pq.empty()) {
            int s=pq.top();
            v.push_back(pq.top());
            pq.pop();
            for (int i=0;i<prerequisites.size();i++){
                if (prerequisites[i][1]==s && in_degree[prerequisites[i][0]]>=1) {
                    in_degree[prerequisites[i][0]]--;
                    if (in_degree[prerequisites[i][0]]==0) {
                        pq.push(prerequisites[i][0]);
                    }
                }
            }

        }
        if (v.size()!=numCourses) return {};
        return v;
    }
};