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
    ListNode* rotateRight(ListNode* head, int k) {
         if(head == NULL || head->next == NULL || k == 0) return head;

         ListNode*temp = head;
         int len = 0;

         while(temp!= NULL){
            len++;
            temp = temp->next;

         }

         k = k%len;
         for(int i =0 ;i<k;i++){
             ListNode* prev = NULL;
             ListNode* curr = head;
             while(curr->next){
                prev = curr;
                curr = curr->next;
             }
             prev->next = NULL;
             curr->next = head;
             head = curr;
         }
         return  head;
    }
};