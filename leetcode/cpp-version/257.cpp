/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        vector<int> cur;
        path(root,cur,res);
        return res;

    }

    void path(TreeNode * root,vector<int> cur,vector<string> & res){
        if(root){
            cur.push_back(root->val);
            if(root->left==nullptr && root->right==nullptr){
                string s;
                if (!cur.empty()){
                    s+= std::to_string(cur[0]);
                    for(int i=1;i<cur.size();i++){
                        s+="->";
                        s+=std::to_string(cur[i]);
                    }
                    res.push_back(s);
                }
            }
            path(root->left,cur,res);
            path(root->right,cur,res);
        }

    }
};