class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> p;
        helper(0,s,p,res);
        return res;
    }
    
    void helper(int idx,string s,vector<string> &p,vector<vector<string>> &res){
        if(idx==s.size()){
            res.push_back(p);
            return ;
        }
        for(int i=idx;i<s.size();i++){
            if(chkpal(idx,i,s)){
                p.push_back(s.substr(idx,i-idx+1));
                helper(i+1,s,p,res);
                p.pop_back();
            }
        }
    }
    bool chkpal(int st,int ed,string s){
        while(st<ed){
            if(s[st++]!=s[ed--])
                return false;
        }
        return true;
    }
};