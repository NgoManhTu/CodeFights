std::vector<std::vector<std::vector<bool>>> financialCrisis(std::vector<std::vector<bool>> roadRegister) {
    int n = roadRegister.size();
    vector <vector <vector<bool>> > res;
    int nw[n];
    for (int i = 0; i < n; i++) {
        vector <vector<bool>> change(n - 1);
        int cnt = 0;
        memset(nw, 0, sizeof nw);
        for (int j = 0; j < n - 1; j++) change[j].resize(n - 1);
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            nw[j] = cnt;
            ++cnt;
        }
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (j == i || k == i) continue;
                change[nw[j]][nw[k]] = roadRegister[j][k];
            }
        }
        res.push_back(change);
    }
    return res;
}