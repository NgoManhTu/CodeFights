bool isCaseInsensitivePalindrome(std::string inputString) {
    for (int i = 0; i < inputString.size(); i++) {
        inputString[i] = tolower(inputString[i]);
    }
    for (int l = 0, r = inputString.size() - 1; l <= r; l++, r--) {
        if (inputString[l] != inputString[r]) return false;
    }
    return true;
}
