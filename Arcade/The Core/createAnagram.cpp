int createAnagram(std::string s, std::string t) {
    int cnt[26] = {0};
    for (int i = 0; i < t.size(); i++) {
        cnt[t[i] - 'A']++;
        cnt[s[i] - 'A']--;
    }
    int res = 0;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0) res += cnt[i];
    }
    return res;
}
