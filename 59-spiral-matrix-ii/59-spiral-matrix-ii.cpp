class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int trow = 0, brow = n-1;
        int tcol = 0, bcol = n-1;
        int count = 0;
        vector<vector<int>> ans(n, vector<int>(n));

        while(trow <= brow && tcol <= bcol) {
            for(int j=tcol; j<=bcol; ++j) {
                ++count;
                ans[trow][j] = count; 
            }
            for(int i=trow+1; i<=brow; ++i) {
                ++count;
                ans[i][bcol] = count;
            }
            for(int j=bcol-1; j>=tcol; --j) {
                ++count;
                ans[brow][j] = count;
            }
            for(int i=brow-1; i>trow; --i) {
                ++count;
                ans[i][tcol] = count;
            }
            ++trow, ++tcol;
            --brow, --bcol;
        }
        return ans;
    }
};