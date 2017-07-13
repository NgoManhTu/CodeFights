bool containsDuplicates(std::vector<int> a) {
    if (a.size() == 0) return false;
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i] == a[i + 1]) return true;
    }
    return false;
}
