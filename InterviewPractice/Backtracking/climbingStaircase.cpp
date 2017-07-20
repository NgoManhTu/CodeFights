int x[11];
vector <vector<int>> result;

void backtrack(int p, int n, int k) {
    if (n == 0) {
        vector <int> t;
        for (int i = 1; i < p; i++) {
            t.push_back(x[i]);
        } 
        result.push_back(t);
    } else {
        for (int i = 1; i <= k; i++) {
            if (n >= i) {
                x[p] = i;
                backtrack(p + 1, n - i, k);
            }
        }
    }
}

std::vector<std::vector<int>> climbingStaircase(int n, int k) {
    backtrack(1, n, k);
    return result;
}
