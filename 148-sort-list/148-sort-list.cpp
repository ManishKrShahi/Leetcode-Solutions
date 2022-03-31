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
    ListNode* sortList(ListNode* head) {
        ListNode* curr = head;
        vector<int>v;
        while(curr!=NULL){
           v.push_back(curr->val);
              curr = curr->next;  
          }
        sort(v.begin(),v.end());
        ListNode* ans = new ListNode(0) ,*temp = ans;
        for(auto i:v){
             temp->next = new ListNode(i); 
              temp = temp->next;
         }
        return ans->next;
    }
};