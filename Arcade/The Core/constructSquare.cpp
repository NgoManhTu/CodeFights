int constructSquare(std::string s) {
    int cnt[26] = {0};
    for (int i = 0; i < s.size(); i++) cnt[s[i] - 'a']++;
    sort(cnt, cnt + 26);
    int bound = int(pow(10, s.size() - 1));
    int digits[26];
    int res = -1;
    for (int i = int(sqrt(bound)); i * i < 10 * bound; i++) {
        int x = i * i;
        memset(digits, 0, sizeof digits);
        while (x > 0) {
            digits[x % 10]++;
            x /= 10;
        }
        sort(digits, digits + 26);
        bool equal = true;
        for (int j = 0; j < 26; j++) {
            if (cnt[j] != digits[j]) {
                equal = false;
                break;
            }
        }
        if (equal) {
            res = i * i;
        }
    }
    return res;
}