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
        vector<int> x;
        void inor(TreeNode* root) {
        if (root==NULL)
            return;
        inor(root->left);
        x.push_back(root->val);
        inor(root->right);
    }
   
    bool isValidBST(TreeNode* root) {
        if (root==NULL)
            return true;
        
        inor(root);
        for (int i=1; i<x.size(); i++)
            if (x[i] <= x[i-1])
                return false;
        return true;
    }
};