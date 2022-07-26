class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        unordered_map<int,int> mp;
        return min(mincost(0,cost,mp),mincost(1,cost,mp));
    }
    int mincost(int ci,vector<int>&cost,unordered_map<int,int>&mp)
    {
        if(ci>=cost.size())
        {
            return 0;
        }
        int currentKey=ci;
        if(mp.find(currentKey)!=mp.end())
        {
            return mp[currentKey];
        }
        int onestep=cost[ci]+mincost(ci+1,cost,mp);
         int twostep=cost[ci]+mincost(ci+2,cost,mp);
       mp[currentKey]=min(onestep,twostep);
        return min(onestep,twostep);
    }
};