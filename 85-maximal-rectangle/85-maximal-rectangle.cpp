class Solution {
private:
      int largestRectangleArea(vector<int>& h) {
        int n = h.size(), max_area = 0, temp, curr;
        stack<int> s;

        for (int i = 0; i <= n; i++) {
            while (!s.empty() && (i == n || h[i] <= h[s.top()])) {
                temp = h[s.top()]; 
                s.pop();
                if (s.empty())  curr = i;
                else    curr = i - s.top() - 1;
                max_area = max(max_area, temp * curr);
            }
            s.push(i);
        }
        return max_area;
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int ans = INT_MIN, r = matrix.size(), c = matrix[0].size();
        vector<int> h(c);

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] == '1')  h[j]++;
                else    h[j] = 0;
            }
            int area = largestRectangleArea(h);
            ans = max(ans, area);
        }
        return ans;
    }
};