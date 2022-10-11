class Solution {
public:
    int solve(vector<int>nums){
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
        if(n==1) return nums[0];
        vector<int> t1,t2;
        for(int i=0;i<n;i++){
            if(i!=0)
                t1.push_back(nums[i]);
            if(i!=n-1)
                t2.push_back(nums[i]);
        }
        return max(solve(t1),solve(t2));
    }
};