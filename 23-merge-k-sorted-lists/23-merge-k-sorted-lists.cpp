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
    map<int,int>m;
    ListNode* mergeKLists(vector<ListNode*>& l) {
          for(int i=0;i<l.size();i++)
          {
            ListNode* curr=l[i];
            ListNode *nxt;
            while(curr)
            {   ListNode* temp=curr;
                m[curr->val]++;
                curr=curr->next;
                delete temp;
            }
         }
        ListNode* res=new ListNode(0);
        ListNode* prev=res;
        for(auto it:m)
        {
            for(int i=1;i<=it.second;i++)
            {
                ListNode* temp=new ListNode(it.first);
                prev->next=temp;
                prev=prev->next;
            }
        }
        return res->next;
    }
    
};