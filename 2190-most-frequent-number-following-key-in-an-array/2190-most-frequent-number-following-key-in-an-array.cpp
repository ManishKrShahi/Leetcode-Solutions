class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i]==key)
                freq[nums[i+1]]++;
            
        }
        int maxm=INT_MIN,res=0;
        for(auto it : freq){
            if(maxm<it.second)
            {
                maxm=it.second;
                res=it.first;
            }
        }
        return res;
    }
};