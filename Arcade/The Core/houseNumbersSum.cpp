int houseNumbersSum(std::vector<int> inputArray) {
    int res = 0;
    for (int i = 0; i < inputArray.size(); i++) {
        res += inputArray[i];
        if (inputArray[i] == 0) break;
    }
    return res;
}
