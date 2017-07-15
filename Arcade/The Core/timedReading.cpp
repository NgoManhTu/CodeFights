int timedReading(int maxLength, std::string text) {
    int res = 0;
    string words;
    text = text + " ";
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == ' ' && words.size() > 0) {
            res += (words.size() <= maxLength);
            words = "";
        } else if (('a' <= text[i] && text[i] <= 'z') || ('A' <= text[i] && text[i] <= 'Z')) {
            words += text[i];
        }
    }
    return res;
}
