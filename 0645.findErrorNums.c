/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {  
    int* res = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    int dup = -1, miss = -1;

    // 原地标记：把数值对应位置变成负数
    for (int i = 0; i < numsSize; ++i) {
        int idx = abs(nums[i]) - 1; // 对应下标
        if (nums[idx] < 0) {
            // 已经被标记过，说明当前数是重复的
            dup = abs(nums[i]);
        } else {
            nums[idx] = -nums[idx];
        }
    }

    // 找仍然为正数的位置，就是缺失的数
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] > 0) {
            miss = i + 1;
            break;
        }
    }

    res[0] = dup;
    res[1] = miss;
    return res;
}
