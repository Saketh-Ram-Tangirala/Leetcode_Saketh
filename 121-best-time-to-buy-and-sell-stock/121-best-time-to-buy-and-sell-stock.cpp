class Solution {
public:
    int maxProfit(vector<int>& prices) {
     vector<vector<vector<int>>> vec(prices.size(),vector<vector<int>>(2,vector<int>(2,-1)));
        return besttrans(prices,0,1,1,vec);
    }
    int besttrans(vector<int>&prices,int ci,int canBuy,int transcount,vector<vector<vector<int>>>&vec)
    {
        if(ci>=prices.size())
        {
            return 0;
        }
        if(transcount<=0)
        {
            return 0;
        }
        if(vec[ci][canBuy][transcount]!=-1)
        {
            return vec[ci][canBuy][transcount];
        }
        if(canBuy)
        {
            int idle=besttrans(prices,ci+1,canBuy,transcount,vec);
            int buy=-prices[ci]+besttrans(prices,ci+1,!canBuy,transcount,vec);
            vec[ci][canBuy][transcount]=max(idle,buy);
            return max(idle,buy);
        }
        else
        {
            int idle=besttrans(prices,ci+1,canBuy,transcount,vec);
            int sell=prices[ci]+besttrans(prices,ci+1,canBuy,transcount-1,vec);
             vec[ci][canBuy][transcount]=max(idle,sell);
            return max(idle,sell);
            
            
        }
        
    }
};