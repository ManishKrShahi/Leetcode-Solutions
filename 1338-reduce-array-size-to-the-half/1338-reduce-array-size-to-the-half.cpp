class Solution {
public:
    int minSetSize(vector<int>& arr) {
          unordered_map<int, int> mp;
        priority_queue<int> q;
        for (auto a : arr) mp[a]++;
        for (auto c : mp) q.push(c.second);
        int res = 0, temp = 0;
        while (temp < arr.size() / 2) {
            temp += q.top();
            q.pop();
            res++;
        }
        
        return res;
    }
};