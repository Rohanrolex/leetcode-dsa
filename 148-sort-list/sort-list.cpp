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

ListNode* marge(ListNode* left , ListNode* right){
    ListNode* dummy = new ListNode(-1);
    ListNode* temp = dummy;

    while(left != NULL && right != NULL){
        if(left->val <= right->val){
            temp->next = left;
            left = left->next;
        }else{
            temp->next = right;
            right = right->next;
        }
         temp = temp->next;
    }

    if(left !=NULL){
        temp->next =left;
    }

    if(right !=NULL){
        temp->next =right;
    }
    return dummy->next;
   
}
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL)  return head;


        ListNode* fast = head;
       ListNode* slow = head;
        ListNode* prev = NULL;

        while(fast != NULL && fast->next!= NULL){
             prev =slow;
             slow = slow->next;
             fast = fast->next->next;
        }
 //devide into two parts
        if(prev != NULL){
            prev->next = NULL;
        }

        ListNode* left = sortList(head);
        ListNode* right = sortList(slow);

return marge(left , right);

    }
};