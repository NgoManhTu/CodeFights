int rectanglesIntersection(std::vector<int> a, std::vector<int> b, std::vector<int> c, std::vector<int> d) {
    vector <int> res;
    for (int i = 0; i < 2; i++) {
        if (a[i] > b[i]) {
            int t = a[i];
            a[i] = b[i];
            b[i] = t;
        }
        if (c[i] > d[i]) {
            int t = c[i];
            c[i] = d[i];
            d[i] = t;
        }
        if (b[i] < c[i] || d[i] < a[i]) {
            return 0;
        }
        res.push_back(min(b[i], d[i]) - max(a[i], c[i]));
    }
    return res[0] * res[1];
}
