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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> res;
        ListNode* i=head;
        while(i!=NULL){
            ListNode *curr = i;
            int temp = curr->val;
            bool flag = false;
            while(curr!=NULL){
                if(curr->val > temp){
                    res.push_back(curr->val);
                    flag = true;
                    break;
                }
                curr = curr->next;
            }
            if(flag == false)
                res.push_back(0);
            i = i->next;
        }
        return res;
    }
};