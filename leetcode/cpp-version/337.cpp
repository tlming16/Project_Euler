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
    unordered_map<TreeNode *,int> mp;
public:
    int rob(TreeNode* root) {
        int ans=0;
        if (root==nullptr) return ans;
        ans=root->val;
        if(mp.count(root)) return mp[root];
        if (root->left==nullptr && root->right==nullptr) {
            mp[root]=ans;
            return ans;
        }
        int res=ans;
        if ( root->left ){
            res += rob( root->left->left);
            res += rob (root->left->right);

        }
        if ( root->right) {
            res+= rob(root->right->left);
            res+= rob(root->right->right);
        }
        int m =0;
        m += rob(root->left) +rob(root->right);
        mp[root]=max(m,res);
        return max(m,res);


    }
};