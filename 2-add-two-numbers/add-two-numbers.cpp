/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

 
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p = l1;
        ListNode* q = l2;
        ListNode* dummy = new ListNode(-1);
         ListNode* curr = dummy;
        int carry = 0;

        while(p!=NULL || q!=NULL || carry){
            int sum = carry;

            if(p!=NULL){
               sum+= p->val;
               p = p->next;
            }
            if(q!=NULL){
                sum += q->val;
                q = q->next;
            }

            carry = sum / 10;
            curr->next = new ListNode(sum%10);
            curr = curr->next;
        }
        
       
return dummy->next;
        
    }
};