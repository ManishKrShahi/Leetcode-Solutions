/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
   Node* copyRandomList(Node* head) {
        if(!head) return head;
        
        Node* curr = head;
        while(curr)
        {
            Node* next = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = next;
            curr = next;
        }
        curr = head;
        while(curr)
        {
            if(curr->random)
                curr->next->random = curr->random->next;
            curr = curr->next->next;
        }
        curr = head;
        Node* newHead = head->next;
        Node* curr1 = newHead;
        while(curr1->next)
        {
            curr->next = curr->next->next;
            curr = curr->next;
            curr1->next = curr1->next->next;
            curr1 = curr1->next;
        }
        
        curr->next = curr->next->next;
        
        return newHead;
    }
};