class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        int n=p.size(); 
        int l=1, r=*max_element(p.begin(), p.end());
        
        if(n == h) return r;
        while(l < r){
            int count =0;
            int mid = l+(r-l)/2;
            for(auto it : p){
            count += it/mid;
            if(it%mid) count++;
            }
            if(count>h)
                l=mid+1;
            else r= mid;
        }
        return l;
    }
};