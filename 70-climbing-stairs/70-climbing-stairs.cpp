class Solution {
public:
    int climbStairs(int n) {
            unordered_map<int,int> mp;
      return nthStair(0,n,mp);   
    }
        int nthStair(int cs,int ts,unordered_map<int,int>&mp)
        {
                if(cs==ts)
                {
                        return 1;
                }
                if(cs>ts)
                {
                        return 0;
                }
                int currentKey=cs;
                if(mp.find(currentKey)!=mp.end())
                {
                        return mp[currentKey];
                }
                int a=nthStair(cs+1,ts,mp);
                int b=nthStair(cs+2,ts,mp);
                mp[cs]=a+b;
                return mp[cs];
        }
};