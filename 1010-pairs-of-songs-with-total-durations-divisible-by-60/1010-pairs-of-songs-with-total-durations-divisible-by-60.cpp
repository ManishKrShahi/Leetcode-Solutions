class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& t) {
        unordered_map<int, int> mp;
        if(t.size()==1) return 0;
        int res=0;
        int x;
        for(int i=0;i<t.size();i++){
            if(t[i]%60==0)
            x=0;
            else
            x=60-(t[i]%60);
            if(mp.find(x)!=mp.end()){
                res+=mp[x];
            }
            mp[t[i]%60]++;
        }
        return res;
    }
};