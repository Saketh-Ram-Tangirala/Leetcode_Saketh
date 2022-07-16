class Solution {
public:
        
    int fib(int n) {
            unordered_map<int,int> mp;
            return nthFibb(n,mp);
        
    }
        int nthFibb(int n,unordered_map<int,int>&mp)
        {
                if(n==0 || n==1)
                {
                        return n;
                }
                int currentKey=n;
                if(mp.find(currentKey)!=mp.end())
                {
                        return mp[currentKey];
                }
                mp[currentKey]=nthFibb(n-1,mp)+nthFibb(n-2,mp);
                return mp[n];
        }
};