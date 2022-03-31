class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int l = 0, r =0;
        for(int num:nums){
            l = max(l, num);
            r +=num;
        }
        if(m==nums.size()) return l;
        
        while(l<=r){
            int mid = l + (r-l)/2;
            int cnt =0;
            int total = 0;
           
            for(int i:nums){
                if(total+i>mid){
                    total = 0;
                    cnt++;
                }
                if(cnt>m) break;
                total +=i;
                
                
            }
            
            if(cnt<m){
                
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return l;
    }
};