class Solution {
public:
    int brokenCalc(int startValue, int target) {
        long long res = 0, t = target;
        while(startValue != t){
            if(t%2 == 0 and startValue < t){
                t /= 2;
            }
            else if(t > startValue){
                t +=1;
            }
            else{
                res += abs(t-startValue)-1;
                t = startValue;
            }
            res++;
        }
        return res;
    }
  
};