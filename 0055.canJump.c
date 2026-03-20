bool canJump(int* nums, int numsSize) {
    int remain = 0;
    for (int i = 0; i < numsSize-1; ++i) {
        remain = remain - 1 > nums[i] ? remain - 1 : nums[i]; // 剩余可用步数
        if (remain == 0) return false;
    }
    return true;
}
