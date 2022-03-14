class Solution {
public:
    int strStr(string h, string n) {
        int x = h.size(), y = n.size();
        for (int i = 0; i <= x - y; i++) {
            int j = 0;
            for (; j < y; j++) {
                if (h[i + j] != n[j]) break;
            }
            if (j == y) return i;
        }
        return -1;
    }
};