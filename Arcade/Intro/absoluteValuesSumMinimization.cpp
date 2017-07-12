int absoluteValuesSumMinimization(std::vector<int> a) {
    int res = (int) 2e9;
    int x;
    for (int i = 0; i < a.size(); i++) {
        int total = 0;
        for (int j = 0; j < a.size(); j++) {
            total += abs(a[i] - a[j]);
        }
        if (res > total) {
            res = total;
            x = a[i];
        }
    }
    return x;
}
