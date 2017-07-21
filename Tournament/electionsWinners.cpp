int electionsWinners(std::vector<int> votes, int k) {
    int cur = 0, cntLeaders = 0, res = 0;
    for (int i = 0; i < votes.size(); i++) {
        if (votes[i] == votes[cur]) {
            cntLeaders++;
        }
        if (votes[i] > votes[cur]) {
            cur = i;
            cntLeaders = 1;
        }
    }
    for (int i = 0; i < votes.size(); i++) {
        if (votes[i] + k > votes[cur]) {
            res++;
        }
        if (votes[i] + k == votes[cur] && cur == i &&
            cntLeaders == 1) {
            res++;
        }
    }
    return res;
}
