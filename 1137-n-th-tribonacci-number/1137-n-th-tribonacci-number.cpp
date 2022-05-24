class Solution {
public:
        unordered_map<int,int> mp;
    int tribonacci(int n) {
            if(n==0 || n==1)
            {
                    return n;
            }
            if(n==2)
            {
                    return 1;
            }
            int currentKey=n;
            if(mp.find(currentKey)!=mp.end())
            {
                    return mp[currentKey];
            }
            mp[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
            return mp[currentKey];
        
    }
};