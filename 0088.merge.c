#include <string.h>
#include <stdlib.h> // 引入 malloc/free 头文件

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int* ans = (int*)malloc((n + m) * sizeof(int)); // 动态分配
    if (ans == NULL) return; // 内存分配失败时提前退出
    
    int p1 = 0, p2 = 0, i = 0;
    for (; p1 < m && p2 < n; ++i) {
        if (nums1[p1] <= nums2[p2])
            ans[i] = nums1[p1++];
        else
            ans[i] = nums2[p2++];
    }
    while (p1 < m)
        ans[i++] = nums1[p1++];
    while (p2 < n)
        ans[i++] = nums2[p2++];

    memcpy(nums1, ans, (n + m) * sizeof(int));
    free(ans); // 释放动态分配的内存，避免泄漏
    return;
}
