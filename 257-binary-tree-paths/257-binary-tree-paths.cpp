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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        roottoleaf(root,"",ans);
        return ans;
    }
    void roottoleaf(TreeNode* root,string curr,vector<string>&ans)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {
            curr+=to_string(root->val);
            ans.push_back(curr);
            return;
        }
        curr+=to_string(root->val)+"->";
        roottoleaf(root->left,curr,ans);
        roottoleaf(root->right,curr,ans);
        return;
    }
};