class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums.front();
        int b=nums.back();
        int res=(a*b)/lcm(a,b);
        return res;
    }
};