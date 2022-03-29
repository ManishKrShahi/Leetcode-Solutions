class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        int in=-1;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        for(auto it:map)
        {
        if(it.second>1)
        {
            in=it.first;
        }
    }
    return in;
}
    
};