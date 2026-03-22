void sortColors(int* nums, int numsSize) {
    int p0 = 0, cur = 0, p2 = numsSize - 1, temp;
    while (cur <= p2) {
        if (nums[cur] == 0) {
            temp = nums[cur];
            nums[cur++] = nums[p0];
            nums[p0++] = temp;
        } else if (nums[cur] == 2) {
            temp = nums[cur];
            nums[cur] = nums[p2];
            nums[p2--] = temp;
        } else {
            cur++;
        }
    }
}
