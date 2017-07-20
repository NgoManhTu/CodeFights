std::string digitCharactersSum(char ch1, char ch2) {
    int x = ch1 + ch2 - 96;
    if (x < 10) {
        string s;
        return s = s + char(x + 48);
    } else {
        string s;
        s = x +  = char(x / 10 + 48)
        s = s + char(x % 10);
        return s;
    }
}
