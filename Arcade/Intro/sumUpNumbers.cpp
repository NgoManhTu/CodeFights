int sumUpNumbers(std::string inputString) {
    int res = 0;
    inputString += '.';
    int num = 0;
    for (int i = 0; i < inputString.size(); i++) {
        if (isdigit(inputString[i])) {
            num = num * 10 + inputString[i] - 48;
        } else {
            res += num;
            num = 0;
        }
    } 
    return res;
}
