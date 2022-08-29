class Solution {
public:
    int fib(int n) {
       vector<int> dp(n+1,-1);
        return nthFibb(dp,n);
    }
    int nthFibb(vector<int>&dp,int n)
    {
        if(n<=1)
        {
            return n;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        return dp[n]=nthFibb(dp,n-1)+nthFibb(dp,n-2);
    }
};