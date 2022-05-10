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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> node;
        queue<pair<TreeNode* ,pair<int,int>>> temp;
        temp.push({root,{0,0}});
        while(!temp.empty()){
            auto x=temp.front();
            temp.pop();
            TreeNode* curr=x.first;
            int r=x.second.first,c=x.second.second;
            node[r][c].insert(curr->val);
            if(curr->left){
                temp.push({curr->left,{r-1,c+1}});
            }
            if(curr->right){
                temp.push({curr->right,{r+1,c+1}});
            }
        }
        vector<vector<int>> res;
            for(auto it:node){
                vector<int> col;
                for(auto a: it.second){
                    col.insert(col.end(),a.second.begin(),a.second.end());
                }
                res.push_back(col);
            }
        return res;
    }
};