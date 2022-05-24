class Solution {
public:
    
    int climbStairs(int n) {
         unordered_map<int,int> mp;
     return noofways(0,n,mp);   
    }
    int noofways(int cs,int ts,unordered_map<int,int> &mp)
    {
        if(cs>ts)
        {
            return 0;
        }
        if(cs==ts)
        {
            return 1;
        }
        int currentKey=cs;
        if(mp.find(currentKey)!=mp.end())
        {
            return mp[currentKey];
        }
        int onestep=noofways(cs+1,ts,mp);
        int twostep=noofways(cs+2,ts,mp);
        mp[currentKey]=onestep+twostep;
        return onestep+twostep;
    }
    
};