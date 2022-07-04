class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
            vector<int> v;
            CombinationalSum(candidates,0,target,v,ans);
            return ans;
    }
        void CombinationalSum(vector<int>&candidates,int ci,int target,vector<int>&v,vector<vector<int>>&ans)
        {
                if(target==0)
                {
                       
                        ans.push_back(v);
                        return;
                }
                if(ci>=candidates.size())
                {
                        return;
                }
                int currval=candidates[ci];
                if(target>=currval)
                {
                        v.push_back(currval);
                        CombinationalSum(candidates,ci,target-candidates[ci],v,ans);
                        v.pop_back();
                }
                CombinationalSum(candidates,ci+1,target,v,ans);
        }
        
};