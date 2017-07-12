int differentSymbolsNaive(std::string s) {
    int cnt[26] = {0};
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        if (cnt[s[i] - 'a'] == 0) ++res;
        ++cnt[s[i] - 'a'];
    }
    return res;
}
