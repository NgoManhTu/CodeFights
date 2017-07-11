bool isCryptSolution(std::vector<std::string> crypt, std::vector<std::vector<char>> solution) {
    map <char, char> f;
    for (int i = 0; i < solution.size(); i++) {
        f[solution[i][0]] = solution[i][1];
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < crypt[i].size(); j++) {
            crypt[i][j] = f[crypt[i][j]];
        }
    }
    for (int i = 0; i < 3; i++) {
        if (crypt[i][0] == '0' && crypt[i].size() >= 2) {
            return false;
        }
    }
    long long res[3] = {0, 0, 0};
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < crypt[j].size(); i++) {
            res[j] = res[j] * 10 + crypt[j][i] - '0';
        }
    }
    return (res[0] + res[1] == res[2]);
}
