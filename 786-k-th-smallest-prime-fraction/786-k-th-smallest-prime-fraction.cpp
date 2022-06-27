class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<double,pair<int,int>>> p;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                double temp=(double)arr[i]/arr[j];
                p.push({temp,{arr[i],arr[j]}});
                if(p.size()>k)
                    p.pop();
            }
        }
        return {p.top().second.first,p.top().second.second};
    }
};