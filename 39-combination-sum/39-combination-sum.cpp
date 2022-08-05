class Solution {
public:
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> t;
        solve(0,candidates,target,t,res);
        return res;
    }
    
    
    void solve(int i,vector<int>& candidates,int target,vector<int>& t,vector<vector<int>>& res){
        if(i==candidates.size()){
            if(target==0){
            res.push_back(t);
        }
        return;
        }
        if(candidates[i]<=target){
            t.push_back(candidates[i]);
            solve(i,candidates,target-candidates[i],t,res);
            t.pop_back();
        }
        solve(i+1,candidates,target ,t,res);
        
    }
    
};