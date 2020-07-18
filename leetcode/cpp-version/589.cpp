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
    vector<int> preorder(Node* root) {
        vector<int> ans;
        preorder(root,ans);
        return ans;
        
    }
    void preorder(Node * root,vector<int> & res) {
        if ( root==nullptr) return ;
        stack<Node *> st;
        st.push(root);
        Node * q;
        while ( !st.empty()){
            q= st.top();
            st.pop();
            res.push_back( q->val);
            vector<Node *> v= q->children;
                for (int i=v.size()-1;i>=0;i--){
                    if (v[i]!=nullptr)
                        st.push( v[i]);
            }
            
            
        }
    }
};