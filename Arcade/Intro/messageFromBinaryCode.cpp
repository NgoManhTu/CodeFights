std::string messageFromBinaryCode(std::string code) {
    string res = "";
    for (int i = 0; i + 8 - 1 < code.size(); i += 8) {
        int symbol = 0;
        for (int j = i; j <= i + 8 - 1; j++) {
            symbol = symbol + (code[j] - '0') * pow(2, 7 - j % 8);
        }
        res.push_back(char(symbol));
    }
    return res;
}