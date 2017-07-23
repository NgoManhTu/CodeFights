int boxPiles(std::vector<int> a) {
    bool was[a.size()] = {false};
    int cnt = 0, res = 0;
    sort(a.begin(), a.end());
    while (cnt < a.size()) {
        int lb = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] >= lb && !was[i]) {
                height++;
                was[i] = true;
                cnt++;
            }
        }
        res++;
    }
    return res;
}
