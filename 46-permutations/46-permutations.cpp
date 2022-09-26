class Solution {
public:
    void helper(int idx, vector<int> &nums, vector<vector<int>> &res){
        if(idx==nums.size()){
            res.push_back(nums);
            return;
        }
        for(int i=0;i<=idx;i++){
            swap(nums[idx],nums[i]);
            helper(idx+1,nums,res);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        helper(0,nums,res);
        return res;
    }
};