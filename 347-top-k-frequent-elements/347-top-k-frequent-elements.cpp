class Solution {
    static bool compare(pair<int,int>&a,pair<int,int>&b)
{
    return a.first>b.first;
}
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int>m;
    for(auto it:nums) m[it]++;
    vector<pair<int,int>>v;       
    for(auto it:m){
        v.push_back({it.second,it.first});
    }
    sort(v.begin(),v.end(),compare); 
    vector<int>res;
    for(int i=0;i<k;i++){
        res.push_back(v[i].second);
    }
        return res;
    }
};