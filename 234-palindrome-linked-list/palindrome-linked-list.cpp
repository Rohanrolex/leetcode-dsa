
class Solution {
public:

//give me the reverse linklist 
ListNode* reverseList(ListNode* node){
    ListNode* prev=NULL;
    ListNode* curr = node;
    ListNode* next;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev= curr;
        curr = next;
    }
    return prev;
}

    bool isPalindrome(ListNode* head) {
         if (!head || !head->next) return true;
       ListNode* fast = head;
       ListNode* slow = head;

       while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
       }
            ListNode* c= reverseList(slow->next);

            ListNode* p = head;
            ListNode* q = c;

            while(q != NULL){
                if(p->val != q->val) return false;
                p = p->next;
                q = q->next;
            }
       

return true;
        
    }
};