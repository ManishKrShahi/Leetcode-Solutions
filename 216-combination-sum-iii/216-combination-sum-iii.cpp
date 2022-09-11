class Solution {
public:
    void  combinations(int k,int idx, int n,vector<int>ds,vector<vector<int>>&ans){
        if(n<0 || ds.size()>k)
            return;
        if(n==0 && ds.size()==k){
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<=9;i++){
            ds.push_back(i);
            combinations(k,i+1,n-i,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        combinations(k,1,n,ds,ans);
        return ans;
    }
};