void rotate(int* nums, int numsSize, int k) {
    int ans[numsSize], pos = 0;
    k %= numsSize;
    for (int i = 0; i < numsSize; ++i) {
        pos = (i + k) % numsSize;
        ans[pos] = nums[i];
    }
    memcpy(nums, ans, numsSize * sizeof(int));
    return;
}
