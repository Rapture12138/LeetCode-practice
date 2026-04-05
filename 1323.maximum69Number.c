int maximum69Number(int num) {
    int max_base = 0;
    int base = 1;
    for (int x = num; x > 0; x /= 10) {
        if (x % 10 == 6) {
            max_base = base;
        }
        base *= 10;
    }
    return num + max_base * 3;
}
