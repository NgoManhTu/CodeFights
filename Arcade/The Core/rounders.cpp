int rounders(int value) {
    string res;
    while (value >= 10) {
        int x = value % 10;
        value /= 10;
        res += '0';
        if (x >= 5) {
            value++;
        }
    }
    res += char(value + '0');
    reverse(res.begin(), res.end());
    return stoi(res);
}
