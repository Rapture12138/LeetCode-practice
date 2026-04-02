/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** ans = malloc(n * sizeof(char*));
    for (int i = 1; i <= n; i++) {
        ans[i - 1] = malloc(9); // 也可以每种情况精确计算，这里从简
        if (i % 15 == 0) {
            strcpy(ans[i - 1], "FizzBuzz");
        } else if (i % 3 == 0) {
            strcpy(ans[i - 1], "Fizz");
        } else if (i % 5 == 0) {
            strcpy(ans[i - 1], "Buzz");
        } else {
            sprintf(ans[i - 1], "%d", i);
        }
    }
    *returnSize = n;
    return ans;
}
