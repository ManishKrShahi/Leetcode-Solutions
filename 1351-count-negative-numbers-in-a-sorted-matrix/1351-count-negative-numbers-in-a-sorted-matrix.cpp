class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int count=0;
        int i=r-1,j=0;
        while(i>=0 && i<r && j>=0 && j<c){
            if(grid[i][j]<0){
                count+=c-j;
                i=i-1;
            }
            else
                j=j+1;
        }
        return count;
    }
};