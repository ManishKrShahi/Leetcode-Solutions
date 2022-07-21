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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> revv;
        ListNode* l = head; 
        for(int i = 1; i < left; i++) l = l->next;
        
        ListNode* node = l;
        for(int i = 0; i < (right-left+1); i++){
            revv.push_back(node->val);
            node = node->next;
        }
        reverse(revv.begin(), revv.end());
        for(int i = 0; i < revv.size(); i++){
            l->val = revv[i];
            l = l->next;
        }
    return head;      
    }
};