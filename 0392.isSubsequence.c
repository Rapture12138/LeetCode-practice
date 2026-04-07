bool isSubsequence(char* s, char* t) {
    if (!s[0]) { // s 是空串
        return true;
    }
    int i = 0;
    for (int j = 0; t[j]; j++) {
        if (s[i] == t[j] && !s[++i]) { // 所有字符匹配完毕
            return true; // s 是 t 的子序列
        }
    }
    return false;
}
