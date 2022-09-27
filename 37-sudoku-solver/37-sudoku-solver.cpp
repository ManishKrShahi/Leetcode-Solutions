class Solution {
public:
    void solveSudoku(vector<vector<char>>& b) {
        solve(b);
    }
    bool solve (vector<vector<char>> &b){
        for(int i=0;i<b.size();i++){
            for(int j=0;j<b[0].size();j++){
                if(b[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isvalid(b,i,j,c)){
                           b[i][j]=c;
                
                    if(solve(b)==true)
                        return true;
                    else 
                        b[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    
    bool isvalid(vector<vector<char>> &b,int row,int col,char c){
        for(int i=0;i<9;i++){
            if(b[row][i]==c)
                return false;
             if(b[i][col]==c)
                return false;
             if(b[3*(row/3)+i/3][3*(col/3)+i%3]==c)
                return false;
        }
        return  true;
    }
};