class Solution {
public:
   vector<vector<int>> ans;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        solve(nums, 0);
        return ans;
    }
    void solve(vector<int> nums, int index)
    {
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int i = index; i < nums.size(); i++){
            if(nums[i] != nums[index]){
                swap(nums[i], nums[index]);
                solve(nums, index+1);
            }
            else if(i == index){
                solve(nums, index+1);
            }
        }
    }
};