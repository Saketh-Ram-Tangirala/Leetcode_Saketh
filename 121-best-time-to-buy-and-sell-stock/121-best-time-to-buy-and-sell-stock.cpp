class Solution {
public:
    int maxProfit(vector<int>& prices) {
             vector<vector<vector<int>>> vec(prices.size(),vector<vector<int>>(2,vector<int>(2,-1)));
          return besttime(prices,0,true,1,vec);
            
    }
     int besttime(vector<int>&prices,int currentDay,bool canBuy,int trans,vector<vector<vector<int>>>&vec)
     {
             if(currentDay>=prices.size() || trans<=0)
             {
                     return 0;
             }
              if(vec[currentDay][canBuy][trans]!= -1)
           return vec[currentDay][canBuy][trans];
             if(canBuy)
             {
                     int idle=besttime(prices,currentDay+1,canBuy,trans,vec);
                     int buy=-prices[currentDay]+besttime(prices,currentDay+1,false,trans,vec);
                      return vec[currentDay][canBuy][trans]=max(idle,buy);
             }
             else
             {
                       int idle=besttime(prices,currentDay+1,canBuy,trans,vec);
                       int sell=prices[currentDay]+besttime(prices,currentDay+1,true,trans-1,vec);
                      return vec[currentDay][canBuy][trans]=max(idle,sell);
             }
             
     }
};