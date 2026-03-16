/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checkSymmetric(struct TreeNode* left, struct TreeNode* right) {
    // 1. 两个节点都为空 → 对称
    if (left == NULL && right == NULL) {
        return true;
    }
    // 2. 其中一个为空、另一个不为空 → 不对称
    if (left == NULL || right == NULL) {
        return false;
    }
    // 3. 节点值相等，且递归检查子节点的对称性
    return (left->val == right->val) &&
           checkSymmetric(left->left, right->right)     // 左左 ↔ 右右
           && checkSymmetric(left->right, right->left); // 左右 ↔ 右左
}
bool isSymmetric(struct TreeNode* root) {
    // 空树 或 只有根节点 → 对称
    if (root == NULL || (root->left == NULL && root->right == NULL)) {
        return true;
    }
    // 调用辅助函数，检查根节点的左右子树是否对称
    return checkSymmetric(root->left, root->right);
}
