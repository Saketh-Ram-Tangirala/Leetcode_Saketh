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
    int rangeSumBST(TreeNode* root, int low, int high) {
       if(root==NULL)return 0;
    int sum =0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
          TreeNode* node=q.front();
            q.pop();
            if(node->val<low)
            {
                if(node->right!=NULL)q.push(node->right);
            }
            else if(node->val >high && node->left!=NULL){
                q.push(node->left);                
            }
            else if(node->val>=low && node->val <=high){
                sum+=(node->val);
                if(node->left!=NULL)q.push(node->left);
                if(node->right!=NULL)q.push(node->right);
            } 
        }
        return sum;
    }
    
};