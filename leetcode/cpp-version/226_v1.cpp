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
 class Solution{
public:
 TreeNode* invertTree(TreeNode * root) {
    if (root == nullptr) return nullptr;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* current = q.front();
        TreeNode *temp = current->left;
        current->left = current->right;
        current->right = temp;
        q.pop();
        if (current->left != nullptr) q.push(current->left);
        if (current->right != nullptr) q.push(current->right);
    }
    return root;
    }
 };