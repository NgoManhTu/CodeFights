int lineUp(std::string commands) {
    int res = 0;
    bool sameDirection = true;
    for (int i = 0; i < commands.size(); i++) {
        if (commands[i] == 'L' || commands[i] == 'R') {
            res += !sameDirection;
            sameDirection = !sameDirection;
        } else {
            res += sameDirection;
        }
    }
    return res;
}
