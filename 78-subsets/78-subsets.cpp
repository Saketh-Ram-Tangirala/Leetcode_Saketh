class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
            vector<int> v;
            int n=nums.size();
            generateAllSubsets(nums,0,n,v,ans);
            return ans;
    }
        void generateAllSubsets(vector<int>&nums,int ci,int n,vector<int>&v,vector<vector<int>>&ans)
        {
                if(ci>=n)
                {
                        ans.push_back(v);
                        return;
                }
                int currentVal=nums[ci];
                v.push_back(currentVal);
                generateAllSubsets(nums,ci+1,n,v,ans);
                v.pop_back();
                generateAllSubsets(nums,ci+1,n,v,ans);
                
                
        }
};