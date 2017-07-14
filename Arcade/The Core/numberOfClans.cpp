int numberOfClans(std::vector<int> divisors, int k) {
    int res = 0;
    bool inClan[k] = {false};
    for (int i = 1; i < k; i++) {
        for (int j = i + 1; j <= k; j++){
            bool is_same_clan = true;
            for (int x = 0; x < divisors.size(); x++) {
                if ((i % divisors[x] == 0) && (j % divisors[x] != 0)) {
                    is_same_clan = false;
                    break;
                }
                if ((i % divisors[x] != 0) && (j % divisors[x] == 0)) {
                    is_same_clan = false;
                    break;
                }
            }
            if (is_same_clan) {
                if (inClan[i] || inClan[j]) {
                    inClan[i] = true;
                    inClan[j] = true;                
                } else {
                    inClan[i] = true;
                    inClan[j] = true;                
                    ++res;
                }
            }
        }
    }
    for (int i = 1; i <= k; i++) {
        if (inClan[i] == false) {
            ++res;
        }
    }
    return res;
}
