class Solution {
public:
    void help(int idx, vector<int> &ds,vector<int> &nums,vector<vector<int>> &res){
        res.push_back(ds);
        for(int i=idx;i<nums.size();i++){
            if(i!=idx && nums[i]==nums[i-1])
                continue;
            ds.push_back(nums[i]);
            help(i+1,ds,nums,res);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        vector<int> ds;
        help(0,ds,nums,res);
        return res;
    }
};