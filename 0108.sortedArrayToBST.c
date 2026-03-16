/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    int root = 0;
    struct TreeNode* curnode = NULL;

    if ((nums == NULL) || (numsSize == 0)) {
        return NULL;
    }
    curnode = (struct TreeNode*)malloc(sizeof(struct TreeNode));

    root = numsSize / 2;

    curnode->val = nums[root];
    curnode->left = sortedArrayToBST(&nums[0], root);
    curnode->right = sortedArrayToBST(&nums[root + 1], numsSize - root - 1);
    return curnode;
}
