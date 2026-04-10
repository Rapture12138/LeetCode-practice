bool isLongPressedName(char* name, char* typed) {
    int i = 0, j = 0;
    int n = strlen(name);
    int m = strlen(typed);
    
    while (j < m) {
        if (i < n && name[i] == typed[j]) {  // 匹配，一起走
            i++;
            j++;
        }
        else if (j > 0 && typed[j] == typed[j-1]) {  // 长按重复，跳过
            j++;
        }
        else {  // 不匹配，直接false
            return false;
        }
    }
    return i == n;  // name必须全部匹配完
}
