/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumOfLeftLeaves(struct TreeNode* root) {
    int ans = 0;

    void dfs(struct TreeNode* node) {
        if (node == NULL) {
            return;
        }

        // 递归，寻找左叶子
        dfs(node->left);
        dfs(node->right);

        struct TreeNode* left = node->left; // 当前节点的左儿子
        if (left && left->left == NULL && left->right == NULL) { // 当前节点的左儿子是叶子
            ans += left->val; // 累加节点值
        }
    }

    dfs(root);
    return ans;
}
