int calculateSquareSum(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;    // 提取最后一位
        sum += digit * digit;  // 累加平方
        n = n / 10;            // 去掉最后一位
    }
    return sum;
}

bool isHappy(int n) {
    // 初始化快慢指针，都从n开始
    int slow = n;
    int fast = n;
    
    // 循环：快指针要么到1，要么和慢指针相遇
    do {
        slow = calculateSquareSum(slow);          // 慢指针走1步
        fast = calculateSquareSum(calculateSquareSum(fast)); // 快指针走2步
    } while (slow != fast); // 相遇则终止循环
    
    // 最终若指针指向1，说明是快乐数
    return slow == 1;
}
