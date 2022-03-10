class Solution {
public:
    bool closeStrings(string w1, string w2) {
       vector<int> fw1(26), fw2(26);
        for (auto it : w1)
            fw1[it - 'a']++;
        for (auto it : w2)
            fw2[it - 'a']++;
        
        for (int i = 0; i < 26; ++i) {
            if ((fw1[i] && !fw2[i]) || (!fw1[i] && fw2[i]))
                return false;
        }
        sort(fw1.begin(), fw1.end());
        sort(fw2.begin(), fw2.end());
        return fw1 == fw2;
    }
};