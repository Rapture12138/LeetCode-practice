int pivotIndex(int* nums, int numsSize) {
    int sum = 0;
    for (int i = 0; i < numsSize; ++i) {
        sum += nums[i];
    }
    int lsum;
    for (int i = 0; i < numsSize; ++i) {
        if (lsum == sum - nums[i] - lsum) {
            return i;
        }
        lsum += nums[i];
    }
    return -1;
}
