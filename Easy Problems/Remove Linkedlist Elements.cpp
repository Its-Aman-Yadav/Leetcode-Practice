//https://leetcode.com/problems/remove-linked-list-elements/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val == val) head = head->next;
        
        ListNode* cur = head;
        while(cur){
            if(cur->next && cur->next->val == val)
                cur->next = cur->next->next;
            else cur = cur->next;
            
        }
        return head;
    }
};
