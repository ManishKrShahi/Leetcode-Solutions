class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       vector<int> a;
        int x=nums[0];
        a.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            x+=nums[i];
            a.push_back(x);
        }
        return a;
    }
};