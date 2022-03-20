class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& w, string p) {
        vector<string> res;
        for(int i=0;i<w.size();i++){
            int f = 1;
            map<char,int> m1,m2;
            for(int j=0;j<w[i].size();j++){
                if(m1.find(p[j])!=m1.end() && m1[p[j]]!=w[i][j]){
                    f = 0;
                    break;
                }
                else if(m2.find(w[i][j])!=m2.end() && m2[w[i][j]]!=p[j]){
                    f = 0;
                    break;
                }
                else{
                    m1[p[j]] = w[i][j];
                    m2[w[i][j]] = p[j];
                }
            }
            if(f){
                res.push_back(w[i]);
            }
        }
        return res;
    }
   
};