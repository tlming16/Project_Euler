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
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr) return nullptr;
        TreeNode * right = invertTree(root->right);
        TreeNode * left = invertTree(root->left);
        root->left =right;
        root->right=left;
        return root;

    }
};
