int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    // O(n) 时间，O(1) 额外空间
    for (int i = 0; i < numsSize; i++) {
        int index = abs(nums[i]) - 1;  // 数字对应下标
        if (nums[index] > 0) {
            nums[index] = -nums[index]; // 标记为负数
        }
    }

    // 收集正数（没被标记 = 消失的数字）
    int* res = (int*)malloc(numsSize * sizeof(int));
    int p = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            res[p++] = i + 1;
        }
    }

    *returnSize = p;
    return res;
}
