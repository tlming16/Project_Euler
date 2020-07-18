/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> res;
        postorder_visit(root,res);
        return res;
        
    }
    void postorder_visit(Node *root,vector<int> & res){
        if(root==nullptr) return ;
        for (auto x:root->children){
            postorder_visit(x,res);
        }
        res.push_back(root->val);
    }
};