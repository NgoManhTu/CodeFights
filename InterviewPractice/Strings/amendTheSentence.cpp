std::string amendTheSentence(std::string s) {
    string res = "";
    string concat;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            res += concat + (i == 0 ? "" : " ");
            concat = tolower(s[i]);
        } else {
            concat += s[i];
        }
    }
    res += concat;
    return res;
}
