#include <stdlib.h>

// 数组反转函数（保持不变）
void reverse(int *arr, int len) {
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int bitwiseComplement(int n) {
    // 特殊情况：n=0的二进制是0，反码是1
    if (n == 0) return 1;
    
    int *ans = malloc(sizeof(int) * 32); // 最多32位二进制
    int i = 0, account = 0, sum = 0, flag = 1;
    
    // 把n转成二进制，存储到数组（低位在前）
    while (n != 0) {
        ans[i++] = n % 2;
        n = n / 2;
    }
    
    // 反转数组，让二进制高位在前
    reverse(ans, i);
    
    // 核心修复：将 == 改为 =，实现按位取反
    for (int q = 0; q < i; q++) {
        if (ans[q] == 0) 
            ans[q] = 1; // 赋值操作
        else 
            ans[q] = 0; // 赋值操作
    }
    
    // 跳过前导零
    while (ans[account] == 0) {
        account++;
    }
    
    // 计算反码对应的十进制值
    for (int p = i - 1; p >= account; p--) {
        sum = sum + ans[p] * flag;
        flag = flag * 2;
    }
    
    free(ans); // 释放内存，避免泄漏
    return sum;
}
