bool isPowerOfTwo(int n) {
    // 两步判断：n>0（正整数） + 二进制只有1个1（n&(n-1)==0）
    return n > 0 && (n & (n - 1)) == 0;
}
