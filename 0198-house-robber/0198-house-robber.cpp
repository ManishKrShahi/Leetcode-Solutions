class Solution {
public:
    int solve(int idx,vector<int> & nums,vector<int> &dp){
        if(idx==0)
            return nums[idx];
        if(idx<0)
            return 0;
        if(dp[idx]!=-1)
            return dp[idx];
        int pick=nums[idx]+solve(idx-2,nums,dp);
        int notpick=solve(idx-1,nums,dp);
        return dp[idx]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return solve(n-1,nums,dp);
    }
};