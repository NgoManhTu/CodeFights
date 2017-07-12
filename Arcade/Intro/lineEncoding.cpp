std::string lineEncoding(std::string s) {
    string res;
    for (int i = 0, j = 0; i < s.size(); ) {
        while (s[j] == s[i] && j < s.size()) {
            j++;
        }
        if (j - i > 1) {
            res = res + char(j - i + '0');
        }
        res += s[i];
        i = j;
    }
    return res;
}
