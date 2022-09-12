class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int x=0,y=0;
        for(auto it:arr1)
            x^=it;
        for(auto it:arr2)
            y^=it&x;
        return y;
    }
};