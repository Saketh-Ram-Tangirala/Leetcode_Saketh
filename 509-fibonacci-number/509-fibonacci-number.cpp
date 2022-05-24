class Solution {
public:
        unordered_map<int,int> mp;
        
    int fib(int n) {
        if(n==0 || n==1)
        {
                return n;
        }
            int currentKey=n;
         if(mp.find(currentKey)!=mp.end())
         {
               return   mp[currentKey];
         }
            mp[n]=fib(n-1)+fib(n-2);
            return mp[currentKey];
    }
};