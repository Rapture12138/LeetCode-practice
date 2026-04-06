int minAbsoluteDifference(int* nums, int numsSize) {
    int last1 = -1, last2 = -1;
    int min = 100;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            last1 = i;
            if (last2 != -1 && i - last2 < min)
                min = i - last2;
        }
        else if (nums[i] == 2) {
            last2 = i;
            if (last1 != -1 && i - last1 < min)
                min = i - last1;
        }
    }

    return min == 100 ? -1 : min;
}
