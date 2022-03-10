class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]==1 && m.count(nums[i]-1)==0 && m.count(nums[i]+1)==0)
                res.push_back(nums[i]);
        }
        return res;
    }
};