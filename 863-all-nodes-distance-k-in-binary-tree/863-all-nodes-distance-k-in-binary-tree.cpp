/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    void markparent(TreeNode* root,unordered_map<TreeNode* ,TreeNode*> &parent,TreeNode* target){
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty()){
        TreeNode* curr=q.front();
        q.pop();
        if(curr->left){
            parent[curr->left]=curr;
            q.push(curr->left);
        }
        if(curr->right){
            parent[curr->right]=curr;
            q.push(curr->right);
        }
    }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*> parent;
        markparent(root,parent,target);
        unordered_map<TreeNode*,bool> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited[target]=true;
        int d=0;
        while(!q.empty()){
            int size=q.size();
            if(d++==k) break;
            //d++;
            for(int i=0;i<size;i++){
            TreeNode* curr=q.front();
            q.pop();
            
            if(curr->left && !visited[curr->left]){
                q.push(curr->left);
                visited[curr->left]=true;
            }
            if(curr->right && !visited[curr->right]){
                q.push(curr->right);
                visited[curr->right]=true;
            }
            if(parent[curr] && !visited[parent[curr]]){
                q.push(parent[curr]);
                visited[parent[curr]]=true;
            }
            }
        }
        vector<int> res;
        while(!q.empty()){
            TreeNode* c=q.front();
            q.pop();
            res.push_back(c->val);
        }
        return res;
    }
};