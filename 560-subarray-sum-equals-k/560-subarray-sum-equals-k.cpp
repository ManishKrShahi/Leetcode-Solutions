class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int count=0,res=0,x;
        m[count] = 1;
        for(auto it:nums){
            count += it;
            x = count - k;
            if(m.find(x) != m.end()) res += m[x];
            m[count]++;
        }
        return res;
    }
};