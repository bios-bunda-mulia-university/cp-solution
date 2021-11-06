/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
    if (root == NULL) {
        return 0;
    }
    int leftDepth = minDepth(root->left);
    int rightDepth = minDepth(root->right);
    
    if (leftDepth == 0 || rightDepth == 0) return leftDepth + rightDepth + 1;
    
    return (leftDepth > rightDepth ? rightDepth : leftDepth) + 1;
}
