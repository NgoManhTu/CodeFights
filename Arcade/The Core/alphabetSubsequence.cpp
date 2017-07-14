bool alphabetSubsequence(std::string s) {
    int cnt[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        cnt[s[i] - 'a']++;
        if (cnt[s[i] - 'a'] > 1) return false;
        for (int j = s[i] - 'a' + 1; j < 26; j++) {
            if (cnt[j] > 0) return false;
        }
    }
    return true;
}
