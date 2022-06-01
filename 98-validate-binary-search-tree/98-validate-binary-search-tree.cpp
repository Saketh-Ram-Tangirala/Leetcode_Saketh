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
    bool isValidBST(TreeNode* root) {
     long int prev=-9999999999999;
            return validbst(root,prev);
    }
    bool validbst(TreeNode* root,long int &prev)
    {
            if(root==NULL)
            {
                    return true;
            }
            bool leftans=validbst(root->left,prev);
            if(root->val<=prev)
            {
                    return false;
            }
            prev=root->val;
            bool rightans=validbst(root->right,prev);
            return leftans&&rightans;
    }
};