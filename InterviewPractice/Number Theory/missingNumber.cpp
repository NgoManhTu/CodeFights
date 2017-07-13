int missingNumber(std::vector<int> arr) {
    bool was[1010] = {false};
    for (int i = 0; i < arr.size(); i++) {
        was[arr[i]] = true;
    }
    for (int i = 0; i <= 1000; i++) {
        if (!was[i]) return i;
    }
}
