int higherVersion2(std::string s1, std::string s2) {
    vector <int> listNumber1, listNumber2;
    s1 += '.', s2 += '.';
    int number = 0;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == '.') {
            listNumber1.push_back(number);
            number = 0;
        } else {
            number = number * 10 + s1[i] - '0';
        }
    }
    for (int i = 0; i < s2.size(); i++) {
        if (s2[i] == '.') {
            listNumber2.push_back(number);
            number = 0;
        } else {
            number = number * 10 + s2[i] - '0';
        }
    }
    while (listNumber1.size() < listNumber2.size()) listNumber1.push_back(0);
    while (listNumber2.size() < listNumber1.size()) listNumber2.push_back(0);
    for (int i = 0; i < listNumber1.size(); i++) {
        if (listNumber1[i] < listNumber2[i]) return -1;
        if (listNumber1[i] > listNumber2[i]) return 1;
    }
    return 0;
}