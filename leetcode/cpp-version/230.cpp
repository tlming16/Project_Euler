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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> vec;
        in_order(root,vec);
        return vec[k-1];
        
    }

    void in_order(TreeNode  * r,vector<int> & vec){
        if (r==nullptr) return ;
        if (r->left) in_order(r->left,vec);
        vec.push_back(r->val);
        if (r->right) in_order(r->right,vec);
    }
};