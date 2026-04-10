int maxArea(int* height, int heightSize) {
    int left = 0, right = heightSize - 1, water = 0;
    while (left != right) {
        water =fmax((fmin(height[left], height[right]) * (right - left)), water);
        if (fmin(height[left], height[right]) == height[left]) {
            ++left;
        } else {
            --right;
        }
    }
    return water;
}
