std::vector<int> extractEachKth(std::vector<int> inputArray, int k) {
    vector <int> res;
    for (int i = 0; i < inputArray.size(); i++) {
        if ((i + 1) % k == 0) continue;
        res.push_back(inputArray[i]);
    }
    return res;
}
