std::string htmlEndTagByStartTag(std::string startTag) {
    int space = false;
    string res = "</";
    for (int i = 1; i < startTag.size(); i++) {
        if (startTag[i] == ' ') {
            space = true;
            break;
        }
        res += startTag[i];
    }
    res += (space ? ">" : "");
    return res;
}
