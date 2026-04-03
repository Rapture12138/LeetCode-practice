char* toLowerCase(char* s) {
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] <= 'Z' && s[i] >= 'A') {
            s[i] = s[i] + 'a' - 'A';
        }
    }
    return s;
}
