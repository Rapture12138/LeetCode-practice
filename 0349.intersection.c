/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void* a, const void* b) { return *(int*)a - *(int*)b; }
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size,
                  int* returnSize) {

    qsort(nums1, nums1Size, sizeof(int), cmp);
    qsort(nums2, nums2Size, sizeof(int), cmp);

    int maxSize = nums1Size < nums2Size ? nums1Size : nums2Size;
    int* res = (int*)malloc(maxSize * sizeof(int));
    int i = 0, j = 0, index = 0;

    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] == nums2[j]) {
            if (index == 0 || res[index - 1] != nums1[i]) {
                res[index++] = nums1[i];
            }
            i++;
            j++;

        } else if (nums1[i] < nums2[j]) {
            i++;
            
        } else {
            j++;
        }
    }
    *returnSize = index;
    return res;
}
