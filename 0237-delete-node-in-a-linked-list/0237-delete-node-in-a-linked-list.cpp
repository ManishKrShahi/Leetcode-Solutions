/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* nt=node->next;
        *node =*nt;
        delete nt;
        // node->val=node->next->val; 
        // node->next=node->next->next; 
        // delete temp;
    }
};