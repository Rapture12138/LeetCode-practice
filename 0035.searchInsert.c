int searchInsert(int* nums, int numsSize, int target) {
    // 初始化二分查找的左右边界
    int left = 0;
    int right = numsSize - 1;

    // 二分查找核心逻辑
    while (left <= right) {
        // 计算中间位置（避免溢出，等价于 (left+right)/2）
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            // 找到目标值，直接返回索引
            return mid;
        } else if (nums[mid] < target) {
            // 目标值在右半部分，左边界右移
            left = mid + 1;
        } else {
            // 目标值在左半部分，右边界左移
            right = mid - 1;
        }
    }
    return left;
}
