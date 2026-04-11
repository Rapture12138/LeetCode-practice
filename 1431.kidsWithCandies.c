/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies,int* returnSize) {
    *returnSize = candiesSize;
    bool* res = (bool*)malloc(candiesSize * sizeof(bool));
    int most = 0;
    for (int i = 0; i < candiesSize; ++i) {
        if (most < candies[i]) {
            most = candies[i];
        }
        candies[i] += extraCandies;
    }
    for (int i = 0; i < candiesSize; ++i) {
        if (candies[i] >= most) {
            res[i] = true;
        } else {
            res[i] = false;
        }
    }
    return res;
}
