class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0,l,r,mid;
        int high =nums.size();
        while(low<high){
            mid=(low+high)/2;
            if(nums[mid]>=target)
                high=mid;
            else
                low=mid+1;
        }
        l=low;
        low=0;
        high=nums.size();
        while(low<high){
            mid=(low+high)/2;
            
            if(nums[mid]>target)
                high=mid;
            else
                low=mid+1;
        }
            r=low;
            if(l==r)
                return vector<int> {-1,-1};
            else
                return vector<int> {l,r-1};
        }
};