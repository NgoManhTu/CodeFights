std::vector<int> firstReverseTry(std::vector<int> arr) {
    if (arr.size() == 0) {
        vector <int> res;
        return res;
    }
    swap(arr[0], arr[arr.size() - 1]);
    return arr;
}
