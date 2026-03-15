/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* ans = malloc(100 * sizeof(int));
    *returnSize = 0;
    
    void dfs(struct TreeNode * node) {
        if (node == NULL) {
            return;
        }
        dfs(node->left);
        ans[(*returnSize)++] = node->val;
        dfs(node->right);
    }
    dfs(root);
    return ans;
}
