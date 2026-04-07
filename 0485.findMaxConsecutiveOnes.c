#define MAX(a, b) ((b) > (a) ? (b) : (a))

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int ans = 0, cnt = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i]) {
            cnt++; // 连续 1 的个数增加
            ans = MAX(ans, cnt); // 更新答案的最大值
        } else {
            cnt = 0; // 重置
        }
    }
    return ans;
}
