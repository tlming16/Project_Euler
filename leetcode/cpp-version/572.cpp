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
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        vector<TreeNode *> res;
        in_order(s,res);
        for (auto x:res) {
            if ( is(x,t)) return true; 
        }
        return false;
        
    }
    bool is (TreeNode * s,TreeNode * t) {
        if (s==nullptr && t==nullptr) return true;
        if (s==nullptr) return false;
        if (t==nullptr) return false;
        if (s->val!=t->val) return false;
        return is(s->left,t->left) && is(s->right,t->right); 
    }
    void in_order(TreeNode * s,vector<TreeNode *> & res) {
        if (s==nullptr) return ;
        in_order(s->left,res);
        res.push_back(s);
        in_order(s->right,res);
    }
};