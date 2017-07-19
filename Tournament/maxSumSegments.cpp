std::vector<int> maxSumSegments(std::vector<int> inputArray) {
    vector <int> res(inputArray.size());
    for (int i = 1; i <= inputArray.size(); i++) {
        int sum = 0, mxSum = 0, index = -1;
        for (int j = 0; j < inputArray.size(); j++) {
            sum += inputArray[j];
            if (j >= i) {
                sum -= inputArray[j - i];
            }
            if (j >= i - 1 && (index == -1 || sum > mxSum)) {
                mxSum = sum;
                index = j - i + 1;
            }
        }
        res[i - 1] = index;
    }
    return res;
}
