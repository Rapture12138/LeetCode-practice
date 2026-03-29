int arrangeCoins(int n) {
    long long left = 1, right = n;  // 用 long long 防止溢出
    
    while (left < right) {  // 关键：改成 left < right，避免死循环
        // 这里一定要 +1，向上取整，否则会死循环
        long long mid = left + (right - left + 1) / 2;
        
        if (mid * (mid + 1) / 2 > n) {
            right = mid - 1;  
        } else {
            left = mid;       
        }
    }

    return left; 
}
