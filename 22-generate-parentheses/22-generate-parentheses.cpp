class Solution {
public:
    void helper(vector<string> &v,int o,int c, int n,string s){
        if(o==n && c==n){
            v.push_back(s);
            return ;
        }
        if(o<n)
             helper(v,o+1,c,n,s+"(");
        if(c<o)
             helper(v,o,c+1,n,s+")");
    }
    vector<string> generateParenthesis(int n) {
        int o=0,c=0;
        vector<string> v;
        helper(v,o,c,n,"");
        return v;
    }
};