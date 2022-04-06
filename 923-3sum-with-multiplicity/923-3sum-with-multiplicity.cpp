class Solution {
public:
    int threeSumMulti(vector<int>& a, int target) {
        int res=0;
        int n=a.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                res = (res+mp[target-a[i]-a[j]])%1000000007;
            }
          //  res=res%1000000007;
            mp[a[i]]++;
        }
        return res%1000000007;
    }
};