bool kpalindrome(std::string s, int k) {
    int n = s.size();
    int dp[n][n];
    memset(dp, 0, sizeof dp);
    for (int i = 0; i < n; i++) dp[i][0] = 1;
    for (int j = 1; j < n; j++) {
        for (int i = 0; i + j < n; i++) {
            if (s[i] == s[i + j]) {
                dp[i][j] = (j > 1) ? (2 + dp[i + 1][j - 2]) : 2;
            } else {
                dp[i][j] = max(dp[i][j - 1], dp[i + 1][j - 1]);
            }
        }
    }
    return (dp[0][n - 1] + k >= n);
}
