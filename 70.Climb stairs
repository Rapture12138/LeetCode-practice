int climbStairs(int n) {
    // 边界条件校验：处理非法输入（n < 1），增强鲁棒性
    if (n < 1) {
        return 0;
    }

    // 基础情况：n=1时只有1种方法，n=2时有2种方法
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }

    // 初始化状态变量：
    // prev_prev: 第n-2阶的方法数（初始为n=1的情况）
    // prev: 第n-1阶的方法数（初始为n=2的情况）
    // current: 第n阶的方法数
    int prev_prev = 1;
    int prev = 2;
    int current = 0;

    // 从第3阶开始迭代计算，直到第n阶
    for (int i = 3; i <= n; ++i) {
        current = prev_prev + prev;  // 状态转移
        prev_prev = prev;            // 更新前前状态
        prev = current;              // 更新前状态
    }

    return current;
}
