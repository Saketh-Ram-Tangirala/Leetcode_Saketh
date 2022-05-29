class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
         int n=graph.size();
          vector<bool> visited(n);
            vector<int> path;
            SourceToTarget(graph,0,visited,n,path,ans);
            return ans;
    }
        void SourceToTarget(vector<vector<int>>& graph,int ci,vector<bool>&visited,int n,vector<int>&path,vector<vector<int>>&ans)
        {
                if(ci==n-1)
                {
                        path.push_back(ci);
                        ans.push_back(path);
                        path.pop_back();
                        return;
                }
                if(visited[ci]==true)
                {
                        return;
                }
                visited[ci]=true;
                path.push_back(ci);
                 for(auto neighbour: graph[ci])
            SourceToTarget(graph,neighbour,visited,n,path,ans);
        
        visited[ci] = false;
        path.pop_back();
        return;
        }
                
};