class FindSumPairs {
public:
    
    unordered_map<int,int>mp;
    vector<int>m1,m2;
    FindSumPairs(vector<int>& n1, vector<int>& n2) {
        m1=n1;
        m2=n2;
        for(auto&i:m2)mp[i]++;
    }
    
    void add(int it, int val) {
        mp[m2[it]]--;
        m2[it]+=val;
        mp[m2[it]]++;
    }
    
    int count(int tot) {
        int c=0;
        for(auto&i:m1)c+=mp[tot-i];
        return c;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */