/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int left = 0, right = numsSize - 1;
    while (left <= right) {
        if (nums[left] % 2 == 0) { // 寻找最左边的奇数
            left++;
        } else if (nums[right] % 2 != 0) { // 寻找最左边的奇数
            right--;
        } else {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
    *returnSize = numsSize;
    return nums;
}
