bool isPalindrome(int x) {
    // 排除负数和末尾为0的数（0除外）
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;
    
    int reversed = 0;
    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    
    // 奇数位数：reversed 比 x 多一位中间数字，如 12321 -> x=12, reversed=123
    // 偶数位数：x == reversed，如 1221 -> x=12, reversed=12
    return x == reversed || x == reversed / 10;
}
