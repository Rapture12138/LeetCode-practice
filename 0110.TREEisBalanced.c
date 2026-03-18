/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
// 计算以node为根的树的高度
int getTreeHeight(struct TreeNode* node) {
    if (node == NULL)
        return 0;
    int leftHeight = getTreeHeight(node->left);
    int rightHeight = getTreeHeight(node->right);
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

// 判断是否为平衡二叉树
bool isBalanced(struct TreeNode* root) {
    if (root == NULL)
        return true;

    // 计算当前节点左右子树高度
    int leftH = getTreeHeight(root->left);
    int rightH = getTreeHeight(root->right);

    // 核心：当前节点平衡 + 左子树平衡 + 右子树平衡
    return abs(leftH - rightH) <= 1 && isBalanced(root->left) &&
           isBalanced(root->right);
}
