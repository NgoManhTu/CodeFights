int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k) {
    int sum[inputArray.size()];
    sum[0] = inputArray[0];
    for (int i = 0; i < inputArray.size(); i++) {
        sum[i] = sum[i - 1] + inputArray[i];
    }
    int res = sum[k - 1];
    for (int i = k; i < inputArray.size(); i++) {
        res = max(res, sum[i] - sum[i - k]);
    }
    return res;
}
