/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
#define MAX(a, b) ((b) > (a) ? (b) : (a))
void dfs(struct TreeNode* node, int depth, int* ans) {
    if (node == NULL) {
        return;
    }
    ++depth;
    *ans = MAX(*ans, depth);
    dfs(node->right, depth, ans);
    dfs(node->left, depth, ans);
}

int maxDepth(struct TreeNode* root) {
    int ans = 0;
    dfs(root, 0, &ans);
    return ans;
}
