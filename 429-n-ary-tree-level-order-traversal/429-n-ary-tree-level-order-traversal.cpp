/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if(!root) return res;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> v;
            for(int i=0;i<n;i++){
                Node* curr=q.front();
                q.pop();
                v.push_back(curr->val);
                if(curr->children.size()>0){
                    vector<Node*> u=curr->children;
                    for(auto it:u)
                        q.push(it);
                }
            }
            res.push_back(v);
        }
        return res;
    }
};