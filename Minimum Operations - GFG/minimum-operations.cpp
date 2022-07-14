// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        vector<int> dp(n+1,-1);
        return solve(dp,n);
    }
    int solve(vector<int>&dp,int n)
    {
        if(n==0)
        {
            return 0;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        if(n%2==0)
        {
            int ans1=solve(dp,n/2);
            int ans2=solve(dp,n-1);
            return dp[n]=1+min(ans1,ans2);
        }
        else
        {
            return dp[n]=1+solve(dp,n-1);
        }
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}  // } Driver Code Ends