class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
            unordered_map<int,int> mp;
            for(int i=0;i<nums1.size();i++)
            {
                    mp[nums1[i]]++;
            }
            for(int i=0;i<nums2.size();i++)
            {
                    int key=nums2[i];
                    if(mp.find(key)!=mp.end())
                    {
                            ans.push_back(key);
                            mp.erase(key);
                            
                    }
            }
            
            return ans;
            
    }
};