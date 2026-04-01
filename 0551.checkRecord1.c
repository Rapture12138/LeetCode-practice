bool checkRecord(char* s) {
    int ab = 0, la = 0;
    for (int i = 0; s[i]; ++i) {
        switch (s[i]) {
        case 'A':
            ab++;
            la = 0;
            break;
        case 'L':
            la++;
            if (la >= 3) {
                return false;
            }
            break;
        case 'P':
            la = 0;
            break;
        }
    }
    return ab < 2;
}
