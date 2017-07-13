std::string minSubstringWithAllChars(std::string s, std::string t) {
    if (s == "") return s;
    if (t == "") return t;
    int mnl = 0, mp = 0;
    int cnt[26];
    for (int low = 1, high = s.size(), mid; low <= high; ) {
        mid = (low + high) / 2;
        bool checked = false;
        int p = -1;
        for (int i = 0; i < s.size() - mid + 1; i++) {
            memset(cnt, 0, sizeof cnt);
            bool content = true;
            for (int j = 0; j < t.size(); j++) cnt[t[j] - 'a']++;
            for (int j = i; j <= i + mid - 1; j++) cnt[s[j] - 'a']--;
            for (int j = 0; j < 26; j++) {
                if (cnt[j] > 0) {
                    content = false;
                    break;
                }
            }
            if (content) {
                checked = true;
                p = i;
                break;
            }
        }
        if (checked) {
            mnl = mid;
            mp = p;
            high = mid - 1;
        }  else {
            low = mid + 1;
        }
    }
    string res = "";
    for (int i = mp; i <= mp + mnl - 1; i++) {
        res += s[i];
    }
    return res;
}