bool palindromeRearranging(std::string inputString) {
    int cnt[26] = {0};
    for (int i = 0; i < inputString.size(); i++) {
        cnt[inputString[i] - 'a']++;
    }
    int odd = 0;
    for (int i = 0; i < 26; i++) {
        odd += (cnt[i] & 1);
    }
    return odd <= 1;
}
