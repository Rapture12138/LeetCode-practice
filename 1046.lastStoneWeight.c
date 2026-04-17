// 降序比较函数（你写的是对的）
static inline int cmpDesc(const void *pa, const void *pb)
{
    return *(int*)pb - *(int*)pa;
}

int lastStoneWeight(int* stones, int stonesSize) {
    // 一直循环，直到只剩 1 个石头
    while (stonesSize > 1) {
        qsort(stones, stonesSize, sizeof(int), cmpDesc);
    
        int first = stones[0];
        int second = stones[1];
        if (first == second) {
            // 两个都碎了，直接减少数组大小
            stonesSize -= 2;
            // 把后面的石头挪过来
            for (int i = 0; i < stonesSize; i++) {
                stones[i] = stones[i + 2];
            }
        } else {
            // 大的减小的，剩下的放第一个位置
            stones[0] = first - second;
            // 第二个碎了，后面石头往前挪一位
            stonesSize -= 1;
            for (int i = 1; i < stonesSize; i++) {
                stones[i] = stones[i + 1];
            }
        }
    }
    
    // 最后剩下 0 或 1 个石头
    return stonesSize == 0 ? 0 : stones[0];
}
