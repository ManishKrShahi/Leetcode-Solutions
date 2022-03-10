class Solution {
public:
    int countNicePairs(vector<int>& nums) {
       long long int count=0;
        long int M=1000000007;
        vector<int> v;
        unordered_map<int, int> mp;
        for(auto it: nums){
            string s=to_string(it);
            reverse(s.begin(),s.end());
            int k=stoi(s);
            v.push_back(it-k);
        }
        for(int i=0;i<v.size();i++){
            mp[v[i]]++;
            count=(count+(mp[v[i]]-1))%M;
        }
       return (long)count; 
    }
};