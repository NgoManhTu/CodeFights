int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {
    int res = -(int) 1e9;
    for (int i = 0; i < inputArray.size() - 1; i++) {
        res = max(res, abs(inputArray[i] - inputArray[i + 1]));
    }
    return res;
}
