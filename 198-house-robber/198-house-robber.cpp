class Solution {
public:
    int rob(vector<int>& nums) {
        unordered_map<int,int> mp;
            return amount(0,nums,mp);
    }
        int amount(int ci,vector<int>&nums,unordered_map<int,int>&mp)
        {
                if(ci>=nums.size())
                {
                        return 0;
                }
                 int currentKey=ci;
                 if(mp.find(currentKey)!=mp.end())
                {
                        return mp[currentKey];
                }
                int yesrob=nums[ci]+amount(ci+2,nums,mp);
                int norob=amount(ci+1,nums,mp);
               
               
                mp[currentKey]=max(yesrob,norob);
                return mp[currentKey];
        }
};