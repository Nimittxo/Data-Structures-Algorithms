class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def inOrder(self, root, s):
        if not root:
            return
        if not root.left and not root.right:
            s.append(str(root.val) + "_")
            return
        self.inOrder(root.left, s)
        self.inOrder(root.right, s)
    
    def leafSimilar(self, root1, root2):
        s1 = []
        s2 = []

        self.inOrder(root1, s1)
        self.inOrder(root2, s2)