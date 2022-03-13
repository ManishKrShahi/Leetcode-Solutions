class Solution {
public:
    string getHint(string s, string g) {
    unordered_map<char, int> mbulls,mcows;
    int bulls=0, cows=0;
    for(int i=0;i<s.length();i++) {
        if(g[i]==s[i]) {
            bulls++;
        }
        else{
            mbulls[s[i]]++;
            mcows[g[i]]++;
        }
    }

    for(auto it:mbulls)
    {
       char g = it.first;
       int f = it.second;
        
        cows += min(f, mcows[g]);  
    }

    string res = to_string(bulls) + "A" + to_string(cows) + "B";
    return res;
    }
};