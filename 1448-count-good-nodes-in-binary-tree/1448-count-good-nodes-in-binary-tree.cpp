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
    int help(TreeNode* root, int maxx){
        if(root==NULL)
            return 0;
        int cnt=0;
        if(root->val>=maxx){
            maxx=root->val;
            cnt++;
        }
        return cnt+help(root->left,maxx)+help(root->right,maxx);
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        return help(root,root->val);
    }
};