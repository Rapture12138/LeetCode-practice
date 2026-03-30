/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

char ** findRelativeRanks(int* score, int scoreSize, int* returnSize){
    int *tmp = malloc(sizeof(int) * scoreSize);
    char **ans = (char **)malloc(sizeof(char *) * scoreSize);

    (*returnSize) = 0;
    for (int i = 0; i < scoreSize; i++) {
        ans[i] = malloc(sizeof(char) * 13);
    }

    memcpy(tmp, score, sizeof(int) * scoreSize);
    qsort(tmp, scoreSize, sizeof(int), cmp);

    for (int i = scoreSize - 1; i >= 0; i--) {
        for (int j = 0; j < scoreSize; j++) {
            if (tmp[i] == score[j]) {
                if (i == scoreSize - 1) {
                    sprintf(ans[j], "%s", "Gold Medal");
                } else if (i == scoreSize - 2) {
                    sprintf(ans[j], "%s", "Silver Medal");
                } else if (i == scoreSize - 3) {
                    sprintf(ans[j], "%s", "Bronze Medal");
                } else {
                    sprintf(ans[j], "%d", scoreSize - i);
                }

                (*returnSize)++;
            }
        }
    }

    return ans;
}
