std::string longestWord(std::string text) {
    string res;
    string tmp;
    text = text + '.';
    for (int i = 0; i < text.size(); i++) {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')) {
            tmp += text[i];
        } else {
            if (tmp.size() == 0) continue;
            if (tmp.size() > res.size()) {
                res = tmp;
            }
            tmp = "";
        }
    }
    return res;
}
