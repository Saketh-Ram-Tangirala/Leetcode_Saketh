class Solution {
public:
    int tribonacci(int n) {
        unordered_map<int,int> mp;
        return nthTrib(n,mp);
    }
    int nthTrib(int n,unordered_map<int,int> &mp)
    {
        if(n==0)
        {
            return 0;
        }
        if(n==1 || n==2)
        {
            return 1;
        }
        int currentKey=n;
        if(mp.find(currentKey)!=mp.end())
        {
            return mp[currentKey];
        }
        
         int a=nthTrib(n-1,mp);
        int b=nthTrib(n-2,mp);
        int c=nthTrib(n-3,mp);
        mp[currentKey]=a+b+c;
        return mp[currentKey];
        
    }
};