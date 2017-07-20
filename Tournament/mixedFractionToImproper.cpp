std::vector<int> mixedFractionToImproper(std::vector<int> a) {
    vector <int> res = {a[0] * a[2] + a[1], a[2]};
    return res;
}
