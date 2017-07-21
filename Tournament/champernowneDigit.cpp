int champernowneDigit(int n) {
    string res;
    for (int i = 1; i <= 1000; i++) {
        stringstream ans;
        ans << i;
        res = res + ans.str();
        if (res.size() > n) break;
    }
    return res[n -  1] - '0';
}
