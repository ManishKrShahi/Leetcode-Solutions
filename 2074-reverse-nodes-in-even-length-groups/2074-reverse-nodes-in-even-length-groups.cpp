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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL,*curr = head;
        while(curr!= NULL){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        if(head==NULL || head->next == NULL)
            return head;
        int k =1;
        int t=0;
        ListNode* curr = head, *h1 = NULL , *last = NULL,*prev = NULL;
        while( curr != NULL) {
            if(k%2==0){
                h1 = curr;
                last->next = NULL;
                while(t < k && curr!=NULL){  
                    t++;
                    prev = curr;
                    curr = curr->next;
                }
                
                if(t == k || t%2==0){   
                    prev->next = NULL;
                    last->next = reverse(h1);
                    h1->next = curr;
                    k++;
                    t=0;
                }
                else if(curr==NULL){     
                    last->next = h1;
                }
            }
            else{
                while(t<k && curr!= NULL){ 
                    t++;
                    last = curr;
                    curr = curr->next;
                }
                if(t==k){
                    k++;
                    t=0;
                }
                else if(t>0 && t%2==0 && curr==NULL){   
                    ListNode*h2 = h1->next;
                    h1->next = NULL;
                    h1->next = reverse(h2);
                    h2->next = NULL;
                }
            }
        }
      
        return head;
    }
};