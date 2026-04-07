int dominantIndex(int* nums, int numsSize) {
    int pos = 0, max = nums[0], max2 = -1;
    for (int i = 1; i < numsSize; ++i) {
        if (nums[i] > max) {
            max2 = max;
            max = nums[i];
            pos = i;
        } else if (nums[i] > max2) {
            max2 = nums[i];
        }
    }

    return max >= 2 * max2 ? pos : -1;
}
