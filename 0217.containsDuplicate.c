// 快速排序比较函数（qsort库函数需要）
int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

bool containsDuplicate(int* nums, int numsSize) {
    //对数组进行原地快速排序（O(n log n)时间）
    qsort(nums, numsSize, sizeof(int), cmp);
    
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return true; 
        }
    }
    

    return false;
}
