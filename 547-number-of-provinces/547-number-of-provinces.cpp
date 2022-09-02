class Solution {
public:
    void dfs(int curr,vector<int>&vis,vector<int> adj[])
    {
        vis[curr]=1;
        for(auto it:adj[curr])
        {
            if(!vis[it])
            {
                dfs(it,vis,adj);
            }
            
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> adj[n];
        vector<int> vis(n+1,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                cnt++;
                dfs(i,vis,adj);
                
            }
        }
        return cnt;
    }
};