int digitsProduct(int product) {
    if (product == 0) return 10;
    if (product == 1) return 1;
    vector <int> fac;
    while (product > 1) {
        int divided = false;
        for (int i = 9; i > 1; i--) {
            if (product % i == 0) {
                fac.push_back(i);
                product /= i;
                divided = true;
                break;
            }
        }
        if (!divided) return -1;
    }
    sort(fac.begin(), fac.end());
    int res = 0;
    for (int i = 0; i < fac.size(); i++) {
        res = res * 10 + fac[i];
    }
    return res;
}
