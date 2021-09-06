/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int sum(struct TreeNode* node, int val) {
    if (node == NULL) {
        return 0;
    }
    
    val = (val << 1) + node->val;
    
    if (node->left == NULL && node->right == NULL) {
        return val;
    }
    
    return sum(node->left, val) + sum(node->right, val);
}

int sumRootToLeaf(struct TreeNode* root){
    return sum(root, 0);
}
