void moveZeroes(int* nums, int numsSize) {
    int pos = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i]) {
            // 交换 nums[i] 和 nums[i0]
            int tmp = nums[i];
            nums[i] = nums[pos];
            nums[pos] = tmp;
            pos++;
        }
    }
}
