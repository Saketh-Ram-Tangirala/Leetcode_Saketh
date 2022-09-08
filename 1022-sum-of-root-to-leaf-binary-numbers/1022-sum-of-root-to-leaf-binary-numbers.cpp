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
    void roottoleaf(TreeNode* root, string currentString,int* ans)
    {
        if(root->left==NULL and root->right==NULL)
        {
            currentString+=to_string(root->val);
            ans[0]+=stoi(currentString,0,2);
            return;
        }
        string curr=to_string(root->val);
        if(root->left!=NULL)
            roottoleaf(root->left,currentString+curr,ans);
        if(root->right!=NULL)
            roottoleaf(root->right,currentString+curr,ans);
        
    }
    int sumRootToLeaf(TreeNode* root) {
        int *ans=new int[1];
        ans[0]=0;
        roottoleaf(root,"",ans);
        return ans[0];
    }
};