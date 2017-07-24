int longestIncreasingSubsequence(std::vector<int> sequence) {
    int n = sequence.size();
    int dp[n];
    memset(dp, 0, sizeof dp);
    dp[0] = 1;
    for (int i = 1; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (sequence[j] < sequence[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    return *max_element(dp, dp + n);
}