int productExceptSelf(std::vector<int> nums, int m) {
    int n = nums.size();    
    vector <int> mul(n), rev_mul(n);
    mul[0] = nums[0] % m;
    rev_mul[n - 1] = nums[n - 1] % m;
    for (int i = 1; i < n; i++) mul[i] = (long long) mul[i - 1] * nums[i] % m;
    for (int i = n - 2; i >= 0; i--) rev_mul[i] = (rev_mul[i + 1] * nums[i]) % m;
    int res = (rev_mul[1] + mul[n - 2]) % m;
    for (int i = 1; i < n - 1; i++) {
        res = (res + 1LL * mul[i - 1] * rev_mul[i + 1]) % m;
    }
    return res;
}
