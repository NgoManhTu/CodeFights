bool passwordCheck(std::string inputString) {
    bool x = false, y = false, z = false;
    for (var i = 0; i < inputString.size(); i++) {
        if ('0' <= inputString[i] && inputString[i] <= '9') {
            x = true;
        }
        if ('A' <= inputString[i] && inputString[i] <= 'Z') {
            y = true;
        }
        if ('a' <= inputString[i] && inputString[i] <= 'z') {
            z = true;
        }
    }
    return x && y && z && inputString.size() >= 5;
}
