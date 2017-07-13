int arrayMaxConsecutiveSum2(std::vector<int> inputArray) {
    if (inputArray.size() == 0) return 0;
    int x = 0;
    int sum = 0;
    int res = -(int) 1e9;
    for (int i = 0; i < inputArray.size(); i++) {
        sum += inputArray[i];
        res = max(res, sum - x);
        x = min(x, sum);
    }
    return res;
}
