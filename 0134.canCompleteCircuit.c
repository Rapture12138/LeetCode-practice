int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize) {
    int ans = 0, mingas = 0, curgas = 0;
    for (int i = 0; i < gasSize; ++i) {
        curgas += gas[i] - cost[i];
        if (curgas < mingas) {
            mingas = curgas;
            ans = i + 1; // 从油量最少的下一个站开始
        }
    }
    return curgas < 0 ? -1 : ans; //循环完油量>总消耗一定有解
}
