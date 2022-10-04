class Solution {
public:
    /*int dp[31];
    int helper(int n){
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }*/
    int fib(int n) {
        if(n==0)
            return 0;
        int prev=1;
        int prev2=0;
        for(int i=2;i<=n;i++){
            int curr=prev+prev2;
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};