class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int,int> mp;
        return nthStairs(0,n,mp);
    }
    int nthStairs(int ci,int n,unordered_map<int,int> &mp)
    {
        if(ci==n)
        {
            return 1;
        }
        if(ci>n)
        {
            return 0;
        }
        int currentKey=ci;
        if(mp.find(currentKey)!=mp.end())
        {
            return mp[currentKey];
        }
        int onestep=nthStairs(ci+1,n,mp);
        int twostep=nthStairs(ci+2,n,mp);
        mp[currentKey]=onestep+twostep;
        return mp[currentKey];
    }
};