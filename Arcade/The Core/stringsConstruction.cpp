int stringsConstruction(std::string a, std::string b) {
    int have[26] = {0};
    for (int i = 0; i < b.size(); i++) {
        have[b[i] - 'a']++;
    }
    int need[26] = {0};
    for (int i = 0; i < a.size(); i++) {
        need[a[i] - 'a']++;
    }
    int res = (int) 1e9;
    for (int i = 0; i < 26; i++) {
        if (need[i] == 0) continue;
        res = min(res, have[i] / need[i]);
    }
    return res;
}
