/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* distributeCandies(int candies, int n, int* returnSize) {
    int m = (sqrt(8.0 * candies + 1) - 1) / 2;
    int k = m / n;
    int extra = m % n;
    int* ans = malloc(n * sizeof(int));
    *returnSize = n;
    for (int i = 0; i < n; i++) {
        ans[i] = k * (k - 1) / 2 * n + k * (i + 1) + (i < extra ? k * n + i + 1 : 0);
    }
    ans[extra] += candies - m * (m + 1) / 2;
    return ans;
}
