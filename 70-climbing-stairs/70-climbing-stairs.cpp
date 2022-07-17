class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+2,-1);
            dp[n+1]=0;
            dp[n]=1;
            for(int cs=n-1;cs>=0;cs--)
            {
                    dp[cs]=dp[cs+1]+dp[cs+2];
                    
            }
            return dp[0];
    }
};