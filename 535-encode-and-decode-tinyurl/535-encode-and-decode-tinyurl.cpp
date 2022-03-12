class Solution {
public:
map<string,string>m;
    int num=0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        num++;
        string add=to_string(num);
        string ans="https://leetcode.com/";
        ans+=(string)add;
        m[ans]=longUrl;
        return ans;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return m[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));