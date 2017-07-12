bool isBeautifulString(std::string inputString) {
    int cnt[26] = {0};
    for (int i = 0; i < inputString.size(); i++) {
        cnt[inputString[i] - 'a']++;
    }
    for (int i = 0; i < 25; i++) {
        if (cnt[i] < cnt[i + 1]) return false;
    }
    return true;
}
