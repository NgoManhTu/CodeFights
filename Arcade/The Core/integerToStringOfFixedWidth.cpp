std::string integerToStringOfFixedWidth(int number, int width) {
    stringstream ans;
    ans << number;
    string res = ans.str();
    if (res.size() == width) return res;
    if (res.size() > width) return res.substr(res.size() - width);
    string zeros;
    for (int i = 1; i <= width - res.size(); i++) zeros = zeros + '0';
    return zeros + res;
}
