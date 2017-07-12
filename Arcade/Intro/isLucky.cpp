bool isLucky(int n) {
    int total = 0;
    stringstream ans;
    ans << n;
    string x = ans.str();
    for (int i = 0; i < x.size(); i++) {
        if (i * 2 <= x.size() - 1) {
            total += (x[i] - '0');
        } else {
            total -= (x[i] - '0');
        }
    }
    return total == 0;
}
