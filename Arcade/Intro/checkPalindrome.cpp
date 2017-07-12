bool checkPalindrome(std::string inputString) {
    for (int l = 0, r = inputString.size() - 1; l <= r; l++, r--) {
        if (inputString[l] != inputString[r]) {
            return false;
        }
    }
    return true;
}
