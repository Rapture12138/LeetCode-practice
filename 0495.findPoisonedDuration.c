int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration) {
    if (duration == 0)
        return 0;

    int temp = timeSeries[0], ans = 0;
    for (int i = 1; i < timeSeriesSize; ++i) {
        temp = timeSeries[i] - temp;
        if (temp < duration) {
            ans += temp;
        } else {
            ans += duration;
        }
        temp = timeSeries[i];
    }
    return ans + duration;
}
