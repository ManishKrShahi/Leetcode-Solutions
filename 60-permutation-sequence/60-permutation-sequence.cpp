class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> num;
        int fact=1;
        for(int i=1;i<n;i++){
            fact=fact*i;
            num.push_back(i);
            
        }
        num.push_back(n);
        string res="";
        k--;
        while(true){
            res+=to_string(num[k/fact]);
            num.erase(num.begin()+k/fact);
            if(num.size()==0){
                break;
            }
          k=k%fact;
          fact=fact/num.size();
        }
        return res;
    }
};