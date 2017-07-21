std::vector<std::string> binaryGenerator(std::string s) {
    int n = s.size();
    vector <string> res;
    for (int i = 0; i < (1 << n); i++) {
        string t;
        for (int j = 0; j < n; j++) {
            if ((i >> j) & 1) {
                t = '1' + t;
            } else {
                t = '0' + t;
            }
        }
        bool ok = true;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '1' && t[j] != '1') {
                ok = false;
                break;
            }
        }
        if (ok) {
            res.push_back(t);
        }
    }
    return res;
}
