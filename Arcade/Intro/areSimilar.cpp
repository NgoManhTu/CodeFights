bool areSimilar(std::vector<int> a, std::vector<int> b) {
    vector <int> different;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            different.push_back(i);
        }
    }
    if (different.size() == 0) return true;
    if (different.size() != 2) return false;
    if (a[different[0]] == b[different[1]] && a[different[1]] == b[different[0]]) return true;
    return false;
}
