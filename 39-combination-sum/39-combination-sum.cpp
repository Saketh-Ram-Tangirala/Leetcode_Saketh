class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>> ans;
            vector<int> vec;
            CombinationalSum(candidates,0,target,vec,ans);
            return ans;
    }
     void CombinationalSum(vector<int>&candidates,int ci,int target,vector<int>&vec,vector<vector<int>>&ans)
     {
             if(target==0)
             {
                     ans.push_back(vec);
                     return;
             }
             if(ci>=candidates.size())
             {
                     return;
             }
             int currval=candidates[ci];
             if(currval<=target)
             {
                     vec.push_back(currval);
                     CombinationalSum(candidates,ci,target-currval,vec,ans);
                     vec.pop_back();
             }
             CombinationalSum(candidates,ci+1,target,vec,ans);
     }
};