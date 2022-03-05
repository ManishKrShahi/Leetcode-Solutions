class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();
        int low =0,high =n-1;
        if(nums.size() == 0)
            return -1;
        
        if(nums.size() == 1)
            return 0;
        
        while(low<high){
            int mid=(high+low)/2;
           if(nums[mid] > nums[mid + 1])
                    high = mid;
            
            else
                    low = mid + 1;
        }
        return high;
    }
};