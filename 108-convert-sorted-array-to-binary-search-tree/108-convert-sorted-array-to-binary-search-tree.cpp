/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return (createBST(nums, 0, nums.size() - 1));
    }
    
    TreeNode* createBST(vector<int>& nums, int start, int end)
    {
       if (start > end)
           return NULL;
       int mid = (start + end) / 2;

       TreeNode *newNode = new TreeNode(nums[mid]);
       newNode->left = createBST(nums, start, mid - 1);
       newNode->right = createBST(nums, mid + 1, end);
       return (newNode);
    }
};