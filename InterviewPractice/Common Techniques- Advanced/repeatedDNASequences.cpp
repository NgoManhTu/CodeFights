std::vector<std::string> repeatedDNASequences(std::string s) {
    vector <string> res;
    if (s.size() < 10) return res;
    map <string, bool> exist;
    map <string, bool> had;
    for (int i = 0; i <= s.size() - 10; i++) {
        string x = s.substr(i, 10);
        if (exist[x] && !had[x]) {
            res.push_back(x);
            had[x] = true;
        }
        exist[x] = true;
    }
    sort(res.begin(), res.end());
    return res;
}
