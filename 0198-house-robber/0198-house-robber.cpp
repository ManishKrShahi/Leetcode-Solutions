class Solution {
public:
    int solve(int idx,vector<int> & nums){
        // int ng=0;
        int pick,notpick;
        int prev,prev2, curr;
        prev2=0;
        prev=nums[0];
        for(int i=1;i<nums.size();i++){
         pick=nums[i];
            if(i>1)
                pick+=prev2;
         notpick=prev;
        
        curr=max(pick,notpick);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        // vector<int> dp(n,0);
        // dp[0]=nums[0];
        return solve(n-1,nums);
    }
};