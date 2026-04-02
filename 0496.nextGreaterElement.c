/* 解法1 暴力法, 时间复杂度O(n1*n2) */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int i, j;
    int *res = (int*)malloc(sizeof(int) * nums1Size);

    for (i = 0; i < nums1Size; i++) {
        res[i] = -1;
        /* 在nums2中找到nums1[i] */
        for (j = 0; j < nums2Size; j++) {
            if (nums2[j] == nums1[i]) {
                break;
            }
        }
        /* 找到下一个更大的元素, 输出结果 */
        for (j = j + 1; j < nums2Size; j++) {
            if (nums2[j] > nums1[i]) {
                res[i] = nums2[j];
                break;
            }
        }
    }
    *returnSize = nums1Size;
    return res;
}
