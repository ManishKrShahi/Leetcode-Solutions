class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int i=0,j=numbers.size()-1;
        vector<int> res;
        while(i<j){
            int sum=numbers[i]+numbers[j];
            if(sum==target) {
                res.push_back(i+1);
                res.push_back(j+1);
                return res;
            }
            else if(sum>target) j--;
            else i++;
        }
        return res;
    }
};