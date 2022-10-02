class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return findways(n,dp);
    }
    int findways(int n,vector<int>&dp)
    {
        if(n<=1)
        {
            return 1;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        return dp[n]=findways(n-1,dp)+findways(n-2,dp);
    }
};