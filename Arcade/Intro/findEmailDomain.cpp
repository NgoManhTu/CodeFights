std::string findEmailDomain(std::string address) {
    string res;
    for (int i = address.size() - 1; i >= 0; i--) {
        if (address[i] == '@') break;
        res = address[i] + res;
    }
    return res;
}
