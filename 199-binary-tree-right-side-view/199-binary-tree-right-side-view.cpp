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
    vector<int> rightSideView(TreeNode* root) {
        set<int> s;
        vector<int> ans;
         rightview(root,1,s,ans);
        return ans;
    }
    void rightview(TreeNode* root,int level,set<int>&s,vector<int>&ans)
    {
        if(root==NULL)
        {
            return ;
        }
        if(s.find(level)==s.end())
        {
            s.insert(level);
             ans.push_back(root->val);
        }
        rightview(root->right,level+1,s,ans);
        rightview(root->left,level+1,s,ans);
        
    }
};