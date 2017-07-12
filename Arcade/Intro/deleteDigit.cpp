int deleteDigit(int n) {
    stringstream ans;
    ans << n;
    string x = ans.str();
    int res = 0;
    for (int i = 0; i < x.size(); i++) { 
        int num = 0;
        for (int j = 0; j < x.size(); j++) {
            if (i == j) continue;
            num = num * 10 + x[j] - '0';
        } 
        res = max(res, num);
    }
    return res;
}
