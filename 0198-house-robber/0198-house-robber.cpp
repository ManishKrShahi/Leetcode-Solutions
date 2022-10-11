class Solution {
public:
    int solve(int idx,vector<int> & nums,vector<int> &dp){
        // int ng=0;
        int pick,notpick;
        for(int i=1;i<nums.size();i++){
         pick=nums[i];
            if(i>1)
                pick+=dp[i-2];
         notpick=dp[i-1];
        
        dp[i]=max(pick,notpick);
        }
        return dp[idx];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,0);
        dp[0]=nums[0];
        return solve(n-1,nums,dp);
    }
};