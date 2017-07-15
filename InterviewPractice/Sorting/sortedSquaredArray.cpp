std::vector<int> sortedSquaredArray(std::vector<int> a) {
    for (int i = 0; i < a.size(); i++) {
        a[i] = a[i] * a[i];
    }
    sort(a.begin(), a.end());
    return a;
}