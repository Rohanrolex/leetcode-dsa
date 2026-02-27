class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;

        while (curr != NULL && curr->next != NULL) {
            int g = gcd(curr->val, curr->next->val);

            ListNode* newNode = new ListNode(g);

            newNode->next = curr->next;
            curr->next = newNode;

            curr = newNode->next; // move to next original node
        }

        return head;
    }
};