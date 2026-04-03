int cmp(const void* a, const void* b) { return *(int*)a - *(int*)b; }

int findContentChildren(int* g, int gSize, int* s, int sSize) {
    qsort(g, gSize, sizeof(int), cmp);
    qsort(s, sSize, sizeof(int), cmp);
    int ans = 0;
    for (int i = 0; i < sSize; ++i) {
        if (ans < gSize && g[ans] <= s[i]) { //先判断ans<gSize否则越界
            ++ans;
        }
    }
    return ans;
}
