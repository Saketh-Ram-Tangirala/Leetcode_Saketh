class Solution {
public:
    int fib(int n) {
            unordered_map<int,int> mp;
        return fibb(n,mp);
            
    }
        int fibb(int n,unordered_map<int,int>&mp)
        {
                if(n==0 || n==1)
                {
                        return n;
                }
                int left=fibb(n-1,mp);
                int right=fibb(n-2,mp);
                int currentKey=n;
                if(mp.find(currentKey)!=mp.end())
                {
                        return mp[currentKey];
                }
                mp[currentKey]=left+right;
                return left+right;
        }
};