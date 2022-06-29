class Solution {
public:
        unordered_map<int,int> mp;
    int rob(vector<int>& nums) {
        return houserob(0,nums);
            
    }
     int houserob(int ci,vector<int>&nums)
     {
             if(ci>=nums.size())
             {
                     return 0;
             }
             int currentKey=ci;;
             if(mp.find(currentKey)!=mp.end())
             {
                     return mp[ci];
             }
             int yesrob=nums[ci]+houserob(ci+2,nums);
             int norob=houserob(ci+1,nums);
             mp[currentKey]=max(yesrob,norob);
             return mp[ci];
             
     }
};