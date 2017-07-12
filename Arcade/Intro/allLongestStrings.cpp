std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    vector <string> res;
    int mxl = inputArray[0].size();
    for (int i = 1; i < inputArray.size(); i++) {
        mxl = max(mxl, (int) inputArray[i].size());
    }
    for (int i = 0; i < inputArray.size(); i++) {
        if (mxl == inputArray[i].size()) {
            res.push_back(inputArray[i]);
        }
    }
    return res;
}
