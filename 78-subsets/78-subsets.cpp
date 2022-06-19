class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
            vector<int> vec;
            generateSubsets(nums,0,vec,ans);
            return ans;
    }
    void generateSubsets(vector<int>&nums,int ci,vector<int>&vec,vector<vector<int>>&ans)
    {
            if(ci>=nums.size())
            {
                    ans.push_back(vec);
                    return;
            }
            int currval=nums[ci];
            vec.push_back(currval);
            generateSubsets(nums,ci+1,vec,ans);
            vec.pop_back();
            generateSubsets(nums,ci+1,vec,ans);
            
            
            
    }
};
