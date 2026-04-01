int thirdMax(int* nums, int numsSize) {
    // 用 long long 避免 int 边界值干扰
    long long first = LLONG_MIN, second = LLONG_MIN, third = LLONG_MIN;

    for (int i = 0; i < numsSize; i++) {
        long long num = nums[i];
        
        // 重复数字直接跳过
        if (num == first || num == second || num == third) {
            continue;
        }

        // 更新三个最大值
        if (num > first) {
            third = second;
            second = first;
            first = num;
        } else if (num > second) {
            third = second;
            second = num;
        } else if (num > third) {
            third = num;
        }
    }

    // 如果没有第三大，返回最大
    return third == LLONG_MIN ? (int)first : (int)third;
}
