class Solution
{
public:
	void dfs(int i, vector<int> adj[], vector<int> &vis)
	{
		vis[i] = 1;

		for (auto j : adj[i])
			if (!vis[j])
				dfs(j, adj, vis);
	}

	int findCircleNum(vector<vector<int>> &isConnected)
	{
		int n = isConnected.size();
		vector<int> vis(n + 1, 0);
		vector<int> adj[n + 1];

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (isConnected[i][j] == 1 && i != j)
				{
					adj[i].push_back(j);
					adj[j].push_back(j);
				}
			}
		}

		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			if (!vis[i])
			{
				ans++;
				dfs(i, adj, vis);
			}
		}

		return ans;
	}
};