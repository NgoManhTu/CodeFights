int avoidObstacles(std::vector<int> inputArray) {
    bool hasBomb[41];
    fill(hasBomb, hasBomb + 41, false);
    for (int i = 0; i < inputArray.size(); i++) {
        hasBomb[inputArray[i]] = true;
    }
    for (int i = 1; i <= 40; i++) {
        bool can_go = true;
        for (int j = 0; j <= 40; j += i) {
            if (hasBomb[j]) {
                can_go = false;
                break;
            }
        }
        if (can_go) return i;
    }
}
