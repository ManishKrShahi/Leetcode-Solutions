/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        int ans=0;
        queue<pair<TreeNode *,int >> q;
        q.push({root,0});
        while(!q.empty()){
            int s=q.size();
            int minn=q.front().second;
            int first,last;
            for(int i=0;i<s;i++){
                long long int idx=q.front().second - minn;
                TreeNode * temp=q.front().first;
                q.pop();
                if(i==0) first=idx;
                if(i==s-1) last=idx;
                if(temp->left){
                    q.push({temp->left , idx*2+1});
                }
                if(temp->right){
                    q.push({temp->right, idx*2+2});
                }
            }
        ans=max(ans,last-first+1);
        }
        return ans;
    }
};