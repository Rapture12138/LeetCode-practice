bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int count = 0;

    for (int i = 0; i < flowerbedSize; i++) {
        // 当前位置必须是空
        if (flowerbed[i] == 0) {
            // 判断左边是否为空（或在最左边）
            bool left = (i == 0) || (flowerbed[i-1] == 0);
            // 判断右边是否为空（或在最右边）
            bool right = (i == flowerbedSize-1) || (flowerbed[i+1] == 0);

            if (left && right) {
                flowerbed[i] = 1;  // 种花
                count++;
                if (count >= n) return true;  // 够了就提前退出
            }
        }
    }

    return count >= n;
}
