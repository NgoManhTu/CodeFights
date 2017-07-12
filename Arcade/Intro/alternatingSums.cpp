std::vector<int> alternatingSums(std::vector<int> a) {
    int x = 0, y = 0;
    for (int i = 0; i < a.size(); i++) {
        if (i & 1) {
            y += a[i];
        } else {
            x += a[i];
        }
    }
    vector <int> res = {x, y};
    return res;
}
