class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
            vector<int> v;
            int n=graph.size();
            vector<bool> visited(n);
            SourceToTarget(graph,0,n,visited,v,ans);
            return ans;
    }
     void SourceToTarget(vector<vector<int>>&graph,int ci,int n,vector<bool>&visited,vector<int>&v,vector<vector<int>>&ans)
        {
               if(ci==n-1)
               {
                       v.push_back(ci);
                       ans.push_back(v);
                       v.pop_back();
                       return;
               }
                if(visited[ci]==true)
                {
                        return;
                }
                visited[ci]=true;
                v.push_back(ci);
                for(auto neighbour:graph[ci])
                {
                        SourceToTarget(graph,neighbour,n,visited,v,ans);
                }
                visited[ci]=false;
                v.pop_back();
                return;
        }
};