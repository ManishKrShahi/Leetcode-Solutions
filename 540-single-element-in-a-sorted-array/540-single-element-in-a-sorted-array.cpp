class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int l=0, h=n-1, mid, x;
        
        while(l < h){
            mid = l+(h-l)/2;
            if(mid%2==0)
                x=mid+1;
            else
                x=mid-1;
            
            if(nums[mid]==nums[x]) l = mid+1;
            else h = mid;
        }
        return nums[l];
    }
};