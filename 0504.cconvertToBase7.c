char* convertToBase7(int num) {
    if(num == 0) return "0";          // 若为0，直接返回“0”
    char* s = (char*)malloc(sizeof(char*) * 11);
    int i = 9;                      // 最后一位要留给'\0',因此字符从i=9开始存
    int x = num;                    // 保存num的值，方便后续判断正负
    num = abs(num);
    while(num != 0){                // 逐位计数
        s[i--] = num % 7 + '0';
        num /= 7;
    }
    s[10] = '\0';                   // 最后一位加上'\0'
    if(x > 0) return &s[++i];       // 因为上述while操作中，退出循环前，i多做了一步i--,因此此处++i
    else{                           // 若num为负数，则要在最前面加上一个负号
        s[i] = '-';
        return &s[i];
    }
}
