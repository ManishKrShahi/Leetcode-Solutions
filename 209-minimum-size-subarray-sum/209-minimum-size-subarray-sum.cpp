class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res=INT_MAX,i=0,j=0,sum=0;
        int n=nums.size();
        while(j<n)
        {
            sum+=nums[j];
            if(sum<target) j++;
            else if(sum>=target){
            while(sum>=target)
            {
                res=min(res,j-i+1);
                sum-=nums[i];
                i++;
            }
                j++;
            }
        }
        if(res==INT_MAX)
            return 0;
        else 
            return res;
    }
};