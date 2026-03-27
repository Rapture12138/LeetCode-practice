int hammingDistance(int a, int b) {
    int xor = a ^ b;   // 不同位变成 1
    int cnt = 0;

    // 统计 1 的个数
    while (xor) {
        cnt += xor & 1;
        xor >>= 1;
    }
    return cnt;
}
