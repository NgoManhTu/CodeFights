int x[11];
vector <vector<int>> result;

void backtrack(int p, int n) {
    if (p == n + 1) {
        vector <int> t;
        for (int i = 1; i < p; i++) {
            t.push_back(x[i]);
        }
        result.push_back(t);
    } else {
        for (int i = 1; i <= n; i++) {
            bool ok = true;
            for (int j = 1; j < p; j++) {
                if (x[j] == i) {
                    ok = false;
                    break;
                }
                if (x[j] + j == i + p) {
                    ok = false;
                    break;
                }
                if (j - x[j] == p - i) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                x[p] = i;
                backtrack(p + 1, n);
            }
        }
    }
}

std::vector<std::vector<int>> nQueens(int n) {
    backtrack(1, n);
    return result;
}
