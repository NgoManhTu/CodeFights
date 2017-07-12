std::string longestDigitsPrefix(std::string inputString) {
    string res;
    for (int i = 0; i < inputString.size(); i++) {
        if (!isdigit(inputString[i])) break;
        res += inputString[i];
    }
    return res;
}
