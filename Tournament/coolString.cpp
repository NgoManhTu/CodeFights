bool islower(char x) {
    return ('a' <= x && x <= 'z');
}

bool isupper(char x) {
    return ('A' <= x && x <= 'Z');
}

bool coolString(std::string inputString) {
    inputString += '.';
    for (int i = 0; i < inputString.size() - 1; i++) {
        if (!(islower(inputString[i]) || isupper(inputString[i]))) return false;
        if (islower(inputString[i]) && islower(inputString[i + 1])) return false;
        if (isupper(inputString[i]) && isupper(inputString[i + 1])) return false;
    }
    return true;
}
