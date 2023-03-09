//https://leetcode.com/problems/linked-list-cycle-ii/description/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* cur = head;

        while(fast != NULL && fast->next != NULL && slow != NULL){
            fast = fast->next->next;
            slow = slow->next;

            if(fast==slow){
                while(cur != fast){
                    cur= cur->next;
                    fast = fast->next;
                }
                return cur;
            }
        }

        return NULL;
    }
};
