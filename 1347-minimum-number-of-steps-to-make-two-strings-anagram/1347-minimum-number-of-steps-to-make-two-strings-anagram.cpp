class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> f;
        int count = 0;
        for(auto it : s) f[it]++;
        for(auto it : t) f[it]--;
        for(auto it : f) {
            if(it.second < 0) count += it.second;
        }
        return abs(count);
    }
};