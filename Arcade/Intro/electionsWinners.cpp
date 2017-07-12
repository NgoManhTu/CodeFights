int electionsWinners(std::vector<int> votes, int k) {
    int mx = *max_element(votes.begin(), votes.end());
    if (k == 0) {
        int cnt = 0;
        for (int i = 0; i < votes.size(); i++) {
            if (votes[i] == mx) ++cnt;
        }
        return cnt == 1;
    }
    int res = 0;
    for (int i = 0; i < votes.size(); i++) {
        if (votes[i] + k > mx) ++res;
    }
    return res;
}
