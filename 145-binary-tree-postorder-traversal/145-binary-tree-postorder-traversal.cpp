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
    vector<int> ans;
    void help(TreeNode* node){
        if(node == NULL){
            return;
        }
        help(node->left);
        help(node->right);
        ans.push_back(node->val);
        return;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        help(root);
        return ans;
    }
};