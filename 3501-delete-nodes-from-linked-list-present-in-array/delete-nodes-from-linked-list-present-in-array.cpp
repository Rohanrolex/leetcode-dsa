class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        unordered_set<int>p(nums.begin(),nums.end());

        while(head != NULL){
            if(p.find(head->val) == p.end()){
                temp->next = head;
                temp = temp->next;
            }
            head = head->next;
        }

        temp->next = NULL;
        return dummy->next;
    }
};
