class Solution {
public:
bool reorderedPowerOf2(int n) { 
        vector<string>v;
        for(int i=0;i<=30;i++){
            int p = pow(2 , i);
            v.push_back(to_string(p));
        }
        for(int i=0;i<=30;i++){
            sort(v[i].begin(),v[i].end());
        }
        string s = to_string(n);
        sort(s.begin(),s.end());
        for(int i=0;i<=30;i++){
            if(v[i]==s) return true;
        }
        return false;
    }
};   