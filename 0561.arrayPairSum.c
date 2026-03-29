int cmp(const void* a, const void* b) { return *(int*)a - *(int*)b; }
int arrayPairSum(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int pos = 0, sum = 0;
    while (pos < numsSize) {
        sum += nums[pos];
        pos += 2;
    }
    return sum;
}
