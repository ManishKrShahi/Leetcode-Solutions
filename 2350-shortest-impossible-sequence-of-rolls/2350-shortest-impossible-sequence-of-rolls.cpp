class Solution {
public:
    int shortestSequence(vector<int>& rolls, int k) {
        set<int> mp;
        int cnt=0;
        for(auto it: rolls){
            mp.insert(it);
            if(mp.size()==k){
                cnt++;
                mp.clear();
            }
        }
        return cnt+1;
    }
};