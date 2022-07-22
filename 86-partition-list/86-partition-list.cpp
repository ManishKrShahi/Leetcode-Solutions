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
    ListNode* partition(ListNode* head, int x) {
        ListNode* l1=new ListNode(0); 
        ListNode* l2=new ListNode(0);
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* temp=head;
        while(temp!=nullptr){
            if(temp->val<x){
                t1->next=temp;
                t1=t1->next;
            }else{
                t2->next=temp;
                t2=t2->next;
            }
            temp=temp->next;
        }
        t2->next=nullptr;
        t1->next=l2->next;
        return l1->next;
    }
};