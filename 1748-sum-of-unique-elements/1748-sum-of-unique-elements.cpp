class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> m;
        int sum=0;
        for(auto it: nums)
            m[it]++;
        for(auto it:m){
            if(it.second==1)
                sum+=it.first;
        }
        return sum;
    }
};