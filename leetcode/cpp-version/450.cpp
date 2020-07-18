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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root==nullptr) return nullptr;
        if (root->val==key) {
            if ( root->left==nullptr) return root->right;
            else if (root->right==nullptr) return root->left;
            else if (root->right->left==nullptr) {
                root->right->left =root->left;
                return root->right;
            } else {
                TreeNode * c = root->right->left;
                while (c->left!=nullptr) {
                    c=c->left;
                }
                c->left =root->left;
                return root->right;
            }
        }
        if ( root->val <key) {
            TreeNode * v = deleteNode ( root->right,key);
            root->right=v;
            return root;
        }else if (root->val>key) {
            TreeNode * v =deleteNode (root->left,key);
            root->left=v;
            return root;
        }
        return root;


    }
};