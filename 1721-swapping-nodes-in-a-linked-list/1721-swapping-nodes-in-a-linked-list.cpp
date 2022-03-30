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
    ListNode* swapNodes(ListNode* head, int k) {
        int count = 0;
        
        ListNode* curr = head;
        while(curr!=NULL){
            count++;
            curr = curr->next;
        }
        curr = head;
        int cnt = 0;
        int a = k,b = count - k + 1;
        ListNode* s1,*s2;
        while(curr!=NULL){
            cnt++;
            if(cnt == a){
                s1 = curr;
            }
            if(cnt == b){
                s2 = curr;
            }
            curr = curr->next;
        }
        swap(s1->val,s2->val);
        
        return head;
    }
};