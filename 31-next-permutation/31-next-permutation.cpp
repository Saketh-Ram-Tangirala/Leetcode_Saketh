class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) {
            return ;
        }
        int idx1;
        for(idx1 = n-2; idx1 >=0 ; idx1--) {
            if(nums[idx1+1] > nums[idx1]) {
                break;
            }
        }
        
        if(idx1 == -1) {
            reverse(nums.begin(),nums.end());
        }
        else {
            reverse(nums.begin()+idx1+1,nums.end());
            int idx2 = upper_bound(nums.begin()+idx1+1, nums.end(),nums[idx1]) - nums.begin();
            swap(nums[idx1],nums[idx2]);
        }
    }
};