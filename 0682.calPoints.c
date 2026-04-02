int calPoints(char** operations, int operationsSize) {
    int* st = malloc(operationsSize * sizeof(int));
    int m = 0;
    for (int i = 0; i < operationsSize; i++) {
        switch (operations[i][0]) {
            case '+':
                st[m] = st[m - 2] + st[m - 1];
                m++;
                break;
            case 'D':
                st[m] = st[m - 1] * 2;
                m++;
                break;
            case 'C':
                m--;
                break;
            default:
                st[m++] = atoi(operations[i]);
        }
    }
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += st[i];
    }
    free(st);
    return sum;
}
