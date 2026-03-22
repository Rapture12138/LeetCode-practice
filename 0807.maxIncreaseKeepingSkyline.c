#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int maxIncreaseKeepingSkyline(int** grid, int gridSize, int* gridColSize) {
    // 边界防护：空网格直接返回0（补充鲁棒性）
    if (gridSize == 0 || gridColSize[0] == 0) {
        return 0;
    }

    int cols = gridColSize[0]; // 规则数组，列数统一取第一行
    int* row_max = calloc(gridSize, sizeof(int)); // 初始化为0
    int* col_max = calloc(cols, sizeof(int));     // 初始化为0

    // 一次遍历同时计算行/列最大值（核心优化）
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < cols; j++) { 
            row_max[i] = MAX(row_max[i], grid[i][j]);
            col_max[j] = MAX(col_max[j], grid[i][j]);
        }
    }

    // 计算总增量
    int ans = 0;
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < cols; j++) {
            ans += MIN(row_max[i], col_max[j]) - grid[i][j];
        }
    }

    // 释放内存，避免泄漏
    free(row_max);
    free(col_max);

    return ans;
}
