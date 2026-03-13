int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }
    int k = 1;          // 去重后的长度，至少有1个元素（数组非空）
    int pos = 1;        // 下一个要赋值的位置，从第2个元素开始
    int temp = nums[0]; // 初始化temp为第一个元素，避免未定义行为

    // 从第2个元素开始遍历
    for (int i = 1; i < numsSize; i++) {
        // 遇到与前一个不同的元素
        if (temp != nums[i]) {
            temp = nums[i];      // 更新temp为当前不重复元素
            nums[pos] = nums[i]; // 将不重复元素放到pos位置
            pos++;               // 下一个赋值位置后移
            k++;
        }
        // 重复元素则跳过，无需处理
    }
    return k;
}
