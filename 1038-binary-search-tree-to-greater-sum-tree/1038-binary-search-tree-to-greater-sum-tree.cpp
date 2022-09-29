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
    int sum=0;
    void sumofBst(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        sum+=root->val;
        sumofBst(root->left);
        sumofBst(root->right);
        
        
    }
    void makeBst(TreeNode* root)
    {
        if(root==NULL)
        {
        return;
        }
        makeBst(root->left);
        int temp=root->val;
        root->val=sum;
        sum-=temp;
        makeBst(root->right);
        
    }
    TreeNode* bstToGst(TreeNode* root) {
         sumofBst(root);
        makeBst(root);
        return root;
    }
};