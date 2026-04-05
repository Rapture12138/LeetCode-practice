int candy(int* ratings, int ratingsSize) {
    if (ratingsSize == 0) return 0;

    int* candies = malloc(ratingsSize * sizeof(int));
    for (int i = 0; i < ratingsSize; i++) {
        candies[i] = 1;  // 全部先给1颗
    }

    // 左 → 右：比左边大就 +1
    for (int i = 1; i < ratingsSize; i++) {
        if (ratings[i] > ratings[i-1]) {
            candies[i] = candies[i-1] + 1;
        }
    }

    // 右 → 左：比右边大就取 max(当前, 右边+1)
    for (int i = ratingsSize-2; i >= 0; i--) {
        if (ratings[i] > ratings[i+1]) {
            if (candies[i] <= candies[i+1]) {
                candies[i] = candies[i+1] + 1;
            }
        }
    }

    // 求和
    int sum = 0;
    for (int i = 0; i < ratingsSize; i++) {
        sum += candies[i];
    }

    free(candies);
    return sum;
}
