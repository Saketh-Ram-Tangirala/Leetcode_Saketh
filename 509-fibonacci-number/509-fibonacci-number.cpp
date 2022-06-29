class Solution {
public:
        unordered_map<int,int> mp;
    int fib(int n) {
        return nthFibb(n,mp);
    }
        int nthFibb(int n,unordered_map<int,int>&mp)
        {
                if(n<=1)
                {
                        return n;
                }
                int currentKey=n;
                if(mp.find(currentKey)!=mp.end())
                {
                        return mp[n];
                }
                mp[n]=nthFibb(n-1,mp)+nthFibb(n-2,mp);
                
                return mp[n];
                
        }
};