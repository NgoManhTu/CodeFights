std::string reduceString(std::string inputString) {
    for (int i = 0, j = inputString.size() - 1; i <= j; i++, j--) {
        if (inputString[i] != inputString[j]) return inputString.substr(i, j - i + 1);
    }
    return "";
}
