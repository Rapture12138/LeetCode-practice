bool isUgly(int n) {
    // 边界判断
    if (n <= 0) return false;
    if (n == 1) return true;

    // 依次用2、3、5连续约分
    int factors[] = {2, 3, 5};
    for (int i = 0; i < 3; i++) {
        // 只要能整除，就一直除以当前因数（比如12→6→3，直到不能被2整除）
        while (n % factors[i] == 0) {
            n /= factors[i];
        }
    }

    // 最终只剩1，说明只有2/3/5的质因数
    return n == 1;
}
