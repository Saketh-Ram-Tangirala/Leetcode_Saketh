# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        return self.height(root)
    def height(self,root):
        if root is None:
            return 0
        leftans=1+self.height(root.left)
        rightans=1+self.height(root.right)
        
        return max(leftans,rightans)
        