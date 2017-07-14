std::vector<int> removeArrayPart(std::vector<int> inputArray, int l, int r) {
    vector <int> res;
    for (int i = 0; i < inputArray.size(); i++) {
        if (l <= i && i <= r) continue;
        res.push_back(inputArray[i]);
    }
    return res;
}
