int maxProfit(int* prices, int pricesSize) {
    if (prices == NULL || pricesSize <= 1) {
        return 0;
    }

    int total_profit = 0;
    for (int i = 1; i < pricesSize; ++i) {
        // 只要当天价格 > 前一天价格，就累加这部分利润
        if (prices[i] > prices[i - 1]) {
            total_profit += prices[i] - prices[i - 1];
        }
    }

    return total_profit;
}
