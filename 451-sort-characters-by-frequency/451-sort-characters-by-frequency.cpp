class Solution {
public:
    static bool comp(pair<char, int> a, pair<char, int> b) {
           if(a.second == b.second) {
               return a.first < b.second;
           } 
           return a.second > b.second;
        }
    string frequencySort(string s) {
        unordered_map<char, int> m;
        for(auto it: s) {
            m[it]++;
        }
        vector<pair<char, int>> v;
        for(auto it: m) {
            v.push_back({it.first, it.second});
        }
        sort(v.begin(), v.end(),comp);
        string res;
        for(auto it: v) {
            for(int j=0;j<it.second;j++) {
                res += it.first;   
            }
        }
        return res;
    }
};