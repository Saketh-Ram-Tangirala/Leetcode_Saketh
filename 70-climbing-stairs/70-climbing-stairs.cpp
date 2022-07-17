class Solution {
public:
    int climbStairs(int n) {
     
          int  prev2=0;
            int prev1=1;
            for(int cs=n-1;cs>=0;cs--)
            {
                    int curr=prev1+prev2;
                    prev2=prev1;
                    prev1=curr;
                    
            }
            return prev1;
    }
};