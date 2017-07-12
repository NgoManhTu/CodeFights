bool isIPv4Address(std::string inputString) {
    vector <int> numbers;
    int dots = 0;
    int tmp = 0;
    for (int i = 0; i < inputString.size(); i++) {
        if (inputString[i] == '.') {
            dots++;
            if (i == 0 || inputString[i - 1] == '.') continue;
            numbers.push_back(tmp);
            tmp = 0;
        } else if (inputString[i] >= '0' && inputString[i] <= '9') {
            tmp = tmp * 10 + (inputString[i] - '0');
        } else {
            return false;
        }
    }
    numbers.push_back(tmp);
    if (dots >= numbers.size() || numbers.size() != 4) return false;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > 255 || numbers[i] < 0) return false;
    }
    return true;
}
