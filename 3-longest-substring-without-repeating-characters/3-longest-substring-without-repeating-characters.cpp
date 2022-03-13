class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int l=0,res=0;
        for(int i=0;i<s.length();i++){
            
            if (m.find(s[i]) != m.end() && m[s[i]] >= l)
                 l = m[s[i]] + 1;
            
            m[s[i]] = i;
            res=max(res,i-l+1);
        }
        
        return res;
    }
};