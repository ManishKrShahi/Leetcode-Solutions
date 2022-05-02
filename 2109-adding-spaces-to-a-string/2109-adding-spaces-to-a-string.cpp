class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = s.size() , m = spaces.size();
		int i = 0 , j = 0;
		string res = "";
		while(i<n){
			if(j<m && i==spaces[j]){
				res+=" ";
				j++;
			}
			res+=s[i];
			i++;
		}
		return res;
    }
};