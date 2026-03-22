/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int getHeight(struct TreeNode* node, int direction) {
    int height = 0;
    while (node != NULL) {
        height++;
        node = direction == 0 ? node->left : node->right;
    }
    return height;
}

// 优化版：时间复杂度O(log²n)，仅适用于完全二叉树
int countNodes(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    // 计算当前节点的左高度（一直向左）、右高度（一直向右）
    int left_h = getHeight(root, 0);  
    int right_h = getHeight(root, 1); 

    if (left_h == right_h) {
        // 是满二叉树，节点数=2^h - 1（h为高度）[直接返回，节省递归时间]
        return (1 << left_h) - 1;
    } else {
        // 非满，递归计算左+右子树，+1是当前根节点
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
}
