bool checkSameElementExistence(std::vector<int> arr1, std::vector<int> arr2) {
    map <int, bool> exist;
    for (int i = 0; i < arr1.size(); i++) {
        exist[arr1[i]] = true;
    }
    for (int i = 0; i < arr2.size(); i++) {
        if (exist[arr2[i]]) return true;
    }
    return false;
}
