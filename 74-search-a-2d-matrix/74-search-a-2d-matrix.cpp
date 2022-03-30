class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r,c,low,high,mid;
        r = matrix.size();
        c = matrix[0].size();
        low = 0;
        high = r*c-1;
        while(low<=high){
            mid = (low + high)/2;
            if(matrix[mid/c][mid%c]==target){
                return true;
            }
            if(matrix[mid/c][mid%c]>target){
                high=mid-1;
            }else{
                low =mid+1;
            }
        }
        return false;
    }
};