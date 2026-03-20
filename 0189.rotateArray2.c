void rotate(int* nums, int numsSize, int k) {
    if (numsSize <= 1 || k == 0) return;
    k %= numsSize; // 处理k≥数组长度的情况
    int count = 0; // 记录已替换的元素个数（避免死循环）
    int start = 0; // 每个循环的起始位置
    
    while (count < numsSize) {
        int i = start;          // 当前处理的位置
        int temp = nums[i];     // 暂存当前位置的元素（待移动）
        
        do {
            int pos = (i + k) % numsSize; // 计算该元素应去的位置
            int next_temp = nums[pos];    // 暂存pos位置的原有元素
            nums[pos] = temp;             // 把当前元素放到pos位置
            temp = next_temp;             // 更新temp为pos位置的原有元素
            i = pos;                      // 更新i为pos，继续处理
            count++;                      // 已替换元素+1
        } while (i != start); // 回到起始位置，结束当前循环
        
        start++; // 处理下一个未替换的起始位置
    }
}
