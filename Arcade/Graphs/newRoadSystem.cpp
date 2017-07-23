bool newRoadSystem(std::vector<std::vector<bool>> roadRegister) {
    int n = roadRegister.size();
    int din[n] = {0}, dout[n] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (roadRegister[i][j]) {
                din[j]++;
                dout[i]++;
            }
        }
    }
    bool res = true;
    for (int i = 0; i < n; i++) {
        if (din[i] != dout[i]) {
            res = false;
            break;
        }
    }
    return res;
} 
