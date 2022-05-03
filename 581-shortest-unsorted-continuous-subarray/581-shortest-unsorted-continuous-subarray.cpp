class Solution {
public:
      int findUnsortedSubarray(vector<int>& n) {
        int s= -1, e = -1,  max = INT_MIN;
        for(int i=0; i<n.size();i++){
            if(max>n[i]){
                if(s== -1)s= i-1;
                while(s-1>=0 && n[s-1]>n[i])s--;
                e = i+1;
            }
            else max = n[i];
        }
        return e - s;   
    }
};