//https://leetcode.com/problems/middle-of-the-linked-list/description/

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

    int length(ListNode* head){
        int size=0;
         while(head != NULL){
           size++;
           head = head->next;
         }

         return size;
    }

    ListNode* middleNode(ListNode* head) {
              int len = length(head);
              int ans = len/2;
              int cnt=0;
              while(cnt < ans){
                head=head->next;
                cnt++;
              }

              return head;
    }
};
