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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> inmp;
        for(int i=0;i<inorder.size();i++){
            inmp[inorder[i]]=i;
        }
            TreeNode* root=buildtree(preorder,0,preorder.size()-1,
                                    inorder,0,inorder.size()-1,inmp);
            return root;
        }
        
    
    TreeNode* buildtree(vector<int> &preorder,int prestart,int preend,vector<int> &inorder, int instart,int inend,
                       map<int,int> &inmp)
    {
        
        if(instart>inend || prestart>preend) return NULL;
        TreeNode* root=new TreeNode(preorder[prestart]);
        int inroot=inmp[root->val];
        int inleft=inroot-instart;
        root->left=buildtree(preorder,prestart+1,prestart+inleft,
                            inorder,instart,inroot-1,inmp);
        root->right=buildtree(preorder,prestart+inleft+1,preend,
                             inorder,inroot+1,inend,inmp);
        return root;
    }
};