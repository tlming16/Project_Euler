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
    int res;
public:
    int countNodes(TreeNode* root) {
        res=0;
        in_order(root);
        return res;

    }
    void in_order(TreeNode *root){
        if(root==nullptr) return ;
        in_order(root->left);
        res+=1;
        in_order(root->right);
    }
};