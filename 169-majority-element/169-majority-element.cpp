class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
            int ans=nums[0];
            int freq=1;
            for(int i=1;i<n;i++)
            {
                    if(ans==nums[i])
                    {
                            freq++;
                    }
                    else
                    {
                            freq--;
                        if(freq==0)
                    {
                       ans=nums[i];
                                freq=1;
                    }
                    }
                   
            }
            freq=0;
            for(int i=0;i<n;i++)
            {
                    if(ans==nums[i])
                    {
                            freq++;
                    }
            }
            if(freq>=n/2)
            {
                    return ans;
            }
            return -1;
    }
};