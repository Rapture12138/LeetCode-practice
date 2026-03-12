char* longestCommonPrefix(char** strs, int strsSize) {
    char* s0 = strs[0];
    for (int j = 0; s0[j]; j++){
        for (int i = 0; i < strsSize; i++){
            if (strs[i][j] != s0[j]) {
                s0[j] = '\0';
                return s0;
            }
        }
    
    }
    return s0;
} 
