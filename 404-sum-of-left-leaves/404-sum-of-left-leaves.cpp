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
    int sumOfLeftLeaves(TreeNode* root) {
        return sumofleaves(root,false);
    }
    int sumofleaves(TreeNode* root,bool curr)
    {
        if(root==NULL)
        {
            return 0;
        }
        if(root->left==NULL && root->right==NULL && curr==true)
        {
            return root->val;
        }
        int leftans=sumofleaves(root->left,true);
        int rightans=sumofleaves(root->right,false);
        return leftans+rightans;
    }
};