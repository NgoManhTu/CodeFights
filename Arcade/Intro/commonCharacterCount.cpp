int commonCharacterCount(std::string s1, std::string s2) {
    int cnt[2][26] = {0};
    for (int i = 0; i < s1.size(); i++) {
        cnt[0][s1[i] - 'a']++;
    }
    for (int i = 0; i < s2.size(); i++) {
        cnt[1][s2[i] - 'a']++;
    }
    int res = 0;
    for (int i = 0; i < 26; i++) {
        res += min(cnt[0][i], cnt[1][i]);
    }
    return res;
}
