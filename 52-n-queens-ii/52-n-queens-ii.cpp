class Solution {
public:
    int res=0;
    void solve(int col,int n, vector<int> &lr,vector<int> &ld,vector<int> &ud){
        if(col==n){
            res++;
            return;
        }
        for(int row=0;row<n;row++){
            if(lr[row]==0 && ld[row+col]==0 && ud[n-1+col-row]==0){
                //bd[row][col]='Q';
                lr[row]=1;
                ld[row+col]=1;
                ud[n-1+col-row]=1;
                solve(col+1,n,lr,ld,ud);
                //bd[row][col]='.';
                lr[row]=0;
                ld[row+col]=0;
                ud[n-1+col-row]=0;
            }
        }
    }
    int totalNQueens(int n) {
        /*vector<vector<string>> res;
        vector<string> bd(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            bd[i]=s;
        }*/
        vector<int> lr(n,0),ud(2*n-1,0),ld(2*n-1,0);
        solve(0,n,lr,ld,ud);
        return res;
    }
};