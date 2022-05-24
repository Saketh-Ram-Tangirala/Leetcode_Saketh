class Solution {
    public int climbStairs(int n) {
        return totalWays(0,n,new HashMap<Integer,Integer>());
            
    }
        public int totalWays(int cs,int ts,HashMap<Integer,Integer> memo)
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
                if(memo.containsKey(currentKey))
                {
                        return memo.get(currentKey);
                }
                int onestep=totalWays(cs+1,ts,memo);
                int twostep=totalWays(cs+2,ts,memo);
                memo.put(cs,onestep+twostep);
                return onestep+twostep;
        }
}