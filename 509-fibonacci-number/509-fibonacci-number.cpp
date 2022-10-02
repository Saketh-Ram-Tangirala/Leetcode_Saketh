class Solution {
public:
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return nthFibb(n,dp);
    }
    int nthFibb(int n,vector<int>&dp)
    {
        if(n<=1)
        {
            return n;
            
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        return dp[n]=nthFibb(n-1,dp)+nthFibb(n-2,dp);
    }
};