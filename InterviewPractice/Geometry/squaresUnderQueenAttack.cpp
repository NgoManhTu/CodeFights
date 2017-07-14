std::vector<bool> squaresUnderQueenAttack(int n, std::vector<std::vector<int>> queens, std::vector<std::vector<int>> queries) {
    map <int, bool> wasSum, wasRow, wasCol, wasSub;
    for (int i = 0; i < queens.size(); i++) {
        int x = queens[i][0], y = queens[i][1];
        wasSum[x + y] = true;
        wasSub[x - y] = true;
        wasCol[y] = true;
        wasRow[x] = true;
    }
    vector <bool> res;
    for (int i = 0; i < queries.size(); i++) {
        int x = queries[i][0], y = queries[i][1];
        if (wasSum[x + y] || wasSub[x - y] || wasCol[y] || wasRow[x]) {
            res.push_back(true);
        } else {
            res.push_back(false);
        }
    }
    return res;
}
