std::string sortByString(std::string s, std::string t) {
    int cnt[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        cnt[s[i] - 'a']++;
    }
    string res;
    for (int i = 0; i < t.size(); i++) {
        while (cnt[t[i] - 'a'] > 0) {
            res += t[i];
            cnt[t[i] - 'a']--;
        }
    }
    return res;
}