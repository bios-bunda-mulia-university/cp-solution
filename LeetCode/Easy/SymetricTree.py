class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def isMirror(self, left: TreeNode, right: TreeNode) -> bool:
        if left is None and right is None:
            return True
        elif left is not None and right is not None:
            inner = self.isMirror(left.right, right.left)
            outer = self.isMirror(left.left, right.right)
            return left.val == right.val and inner and outer
        
        return False
        
    def isSymmetric(self, root: TreeNode) -> bool:
        return root is None or self.isMirror(root.left, root.right)
        