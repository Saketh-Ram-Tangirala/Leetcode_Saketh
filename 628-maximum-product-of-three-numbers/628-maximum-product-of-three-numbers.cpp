class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int max1=1;
        int max2=1;
        max1=(nums[0]*nums[1]*nums[n-1]);
        max2=(nums[n-1]*nums[n-2]*nums[n-3]);
        return max(max1,max2);
        
    }
};