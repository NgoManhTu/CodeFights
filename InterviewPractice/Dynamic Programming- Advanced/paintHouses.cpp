int paintHouses(std::vector<std::vector<int>> cost) {
    int n = cost.size();
    int dp[3][n];    memset(dp, 0, sizeof dp);
    for (int i = 0; i < 3; i++) dp[i][0] = cost[0][i];
    for (int i = 1; i < n; i++) {
        dp[0][i] = cost[i][0] + min(dp[1][i - 1], dp[2][i - 1]);
        dp[1][i] = cost[i][1] + min(dp[2][i - 1], dp[0][i - 1]);
        dp[2][i] = cost[i][2] + min(dp[0][i - 1], dp[1][i - 1]);
    }
    return min(min(dp[0][n - 1], dp[1][n - 1]), dp[2][n - 1]);
}