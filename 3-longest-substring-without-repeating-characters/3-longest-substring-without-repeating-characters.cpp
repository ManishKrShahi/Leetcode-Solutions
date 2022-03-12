class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int len = 0,cnt = 0;
        
        for (int i = 0; i < s.size(); i++){
            if (m.find(s[i]) == m.end()) m[s[i]] = 1;
            else m[s[i]]++;

            while (m[s[i]] > 1){        //having multiple occurence
                m[s[len]]--;
                len++;
            }
            if (i - len + 1 > cnt) cnt = i - len + 1;
        }
        return cnt;
    }
};