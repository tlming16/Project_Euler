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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode * head=new ListNode;
        ListNode * res=head;
        ListNode * cur =head;
        while(l1 || l2){
            int d=carry;
            if(l1){
                d+=l1->val;
                l1=l1->next;
            }
            if(l2){
                d+=l2->val;
                l2=l2->next;
            }
            carry = d/10;
            int digit =d%10;
            ListNode * temp= new ListNode;
            head->val =digit;
            head->next =temp;
            cur=head;
            head =temp;
        }
        
        if (carry) {
            head ->val=1;
        }else {
            cur->next=NULL;
            delete head;
            head=NULL;
        }
        return res;
        
    }
};