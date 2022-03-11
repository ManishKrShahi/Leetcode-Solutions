class Solution {
public:
    vector<int> findOriginalArray(vector<int>& a) {
        vector<int> res;
        unordered_map<int,int> m;
        
        for(auto &i: a){
            m[i]++;
        }
        sort(a.begin(),a.end());
        for(auto &i: a){
            if(m[i]==0) continue;
            if(m[i*2]==0 || m[0]==1) return {};
            res.push_back(i);
            m[2*i]--;
            m[i]--;
            
        }
        return res;
    }
};