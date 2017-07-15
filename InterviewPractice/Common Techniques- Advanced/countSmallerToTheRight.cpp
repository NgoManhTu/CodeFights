const int LIM = 10000;

std::vector<int> countSmallerToTheRight(std::vector<int> nums) {
    int n = nums.size();
    vector <int> res(n);
    if (n == 0) return res;
    map <int, int> bit;
    for (int i = n - 1; i >= 0; i--) {
        nums[i] += LIM + 1;
        for (int x = nums[i] - 1; x > 0; x -= x & -x) {
            res[i] += bit[x];
        }
        for (int x = nums[i]; x <= LIM + LIM; x += x & -x) {
            bit[x]++;
        }
    }
    return res;
}
