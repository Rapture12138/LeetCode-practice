int mySqrt(int x) {
    // 特殊情况：x为0或1时，平方根就是自身
    if (x == 0 || x == 1) {
        return x;
    }
    
    // 遍历查找最大的i，使得i*i <= x
    int i;
    for (i = 1; i <= x / i; ++i) { 
    }
    
    // 循环结束时，i-1就是最大的满足(i-1)*(i-1) <= x的数
    return i - 1;
}
