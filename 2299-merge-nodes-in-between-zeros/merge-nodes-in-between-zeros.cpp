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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(-1); // creating a new listnode
        ListNode* temp = dummy; 
   int sum =0;
   head = head->next; // for skip the first 0
   while(head!= nullptr){
     if(head -> val == 0){
     temp->next = new ListNode(sum); // add the sum value into the dummy linklist 
     temp = temp->next; //increase the temp pointer 

        sum =0; //reset the sum value 
     
     }
     else{
        sum+= head->val;
       
     }
      head = head->next;
     
   }

   return dummy->next;
        
    }
};