class Solution {
public:
    vector<int> partitionLabels(string s) {
      map <char, int> count;
      for(int i = 0; i < s.size(); i++)count[s[i]] = i;
      int j = 0,start = 0,i = 0;
      int n = s.size();
      vector <int> res;
      while(i < n){
         j = max(j, count[s[i]]);
         if( i == j ){
            res.push_back(i-start+ 1);
            start = i + 1;
         }
         i++;
      }
      return res;
    }
};