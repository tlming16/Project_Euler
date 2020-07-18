/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * root =head;
        vector<ListNode *> vec;
        for(;head;){
            vec.push_back(head);
            head=head->next;
        }
        if (vec.size()<1) return root;
        std::reverse(vec.begin(),vec.end());
        for(int i=1;i<vec.size();i++){
            vec[i-1]->next=vec[i];
        }
        
        vec.back()->next=nullptr;
        return *vec.data();

    }
};