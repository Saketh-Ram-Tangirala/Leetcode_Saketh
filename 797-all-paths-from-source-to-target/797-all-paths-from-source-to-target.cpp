class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> vec;
        vector<vector<int>> answer;
        vector<bool> vis(n);
        vec.push_back(0);
        findAllpaths(graph,0,vis,n,vec,answer);
        return answer;
    }
    void findAllpaths(vector<vector<int>>& graph,int curr,vector<bool>&vis,int n,vector<int>&vec,vector<vector<int>>&answer)
    {
        if(curr==n-1)
        {
            answer.push_back(vec);
            return;
        }
        if(vis[curr]==true)
        {
            return;
        }
        vis[curr]=true;
        for(auto neigh:graph[curr])
        {
            vec.push_back(neigh);
            findAllpaths(graph,neigh,vis,n,vec,answer);
            vec.pop_back();
        }
        vis[curr]=false;
    }
};