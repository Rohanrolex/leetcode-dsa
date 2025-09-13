class Solution {
public:
    // reverse linked list
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return nullptr;

        //  Reverse the list
        head = reverseList(head);

        //  Remove nth node from start
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = dummy;

        for (int i = 1; i < n; i++) {
            if (curr->next) curr = curr->next;
        }

        if (curr->next) {
            curr->next = curr->next->next;
        }

        //  Reverse again to restore original order
        head = reverseList(dummy->next);

        return head;
    }
};
