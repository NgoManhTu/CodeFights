int houseRobber(std::vector<int> nums) {
    if (nums.size() == 0) return 0;
    if (nums.size() == 1) return nums[0];
    int f[2][nums.size()];
    f[1][0] = nums[0];
    f[0][0] = 0;
    f[1][1] = nums[1];
    f[0][1] = f[1][0];
    for (int i = 2; i < nums.size(); i++) {
        f[0][i] = f[1][i - 1];
        f[1][i] = f[0][i - 1] + nums[i];
        for (int j = i - 2; j >= 0; j--) {
            f[1][i] = max(f[1][i], f[1][j] + nums[i]);
        }
    }
    return max(f[0][nums.size() - 1], f[1][nums.size() - 1]);
}
