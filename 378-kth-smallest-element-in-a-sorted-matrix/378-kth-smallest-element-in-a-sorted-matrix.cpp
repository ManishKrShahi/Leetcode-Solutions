class Solution {
public:
    int kthSmallest(vector<vector<int>>& a, int k) {
 int n=a.size();
        int low=a[0][0],high=a[n-1][n-1];
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(countMin(mid,a)>=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int countMin(int m,vector<vector<int>>&a){
        int n=a.size();
        int count=0,row=0,col=n-1;
        while(row <= n-1 && col >=0){
            if(a[row][col] <= m){
                count += col+1;
                row++;
            }
            else{
                col--;
            }
        }
        return count;
    }
};