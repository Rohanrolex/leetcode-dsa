class Solution {
public:
  

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return nullptr;
    ListNode* dummy = new ListNode(0);  
     dummy->next = head;
    ListNode* fast = dummy;
    ListNode* slow = dummy;
 

    for(int i =0 ;i<=n;i++){
        fast = fast->next;
    }

    while(fast != NULL){
       fast = fast->next;
       slow = slow->next;
    }
    slow->next = slow->next->next;
       return dummy->next;
    }
};
