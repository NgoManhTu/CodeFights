const int md = (int) 1e9 + 7;

int sumInRange(std::vector<int> nums, std::vector<std::vector<int>> queries) {
    int n = nums.size();
    int sum[n + 1] = {0};
    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i - 1] + nums[i - 1];
    }
    int res = 0;
    for (int i = 0; i < queries.size(); i++) {
        int l = queries[i][0] + 1, r = queries[i][1] + 1;
        res = (res + sum[r] - sum[l - 1] + md) % md;
    }
    return res;
}
