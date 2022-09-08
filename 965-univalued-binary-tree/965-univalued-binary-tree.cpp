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
    bool isUnivalTree(TreeNode* root) {
        return istrue(root,root->val);
    }
    bool istrue(TreeNode* root,int currval)
    {
        if(root==NULL)
        {
            return true;
        }
        if(root->val!=currval)
        {
            return false;
        }
        int la=istrue(root->left,currval);
        int ra=istrue(root->right,currval);
        return la && ra;
    }
};