std::vector<std::vector<char>> fillShortestPaths(std::vector<std::vector<char>> plan) {
    int n = plan.size();
    int m = plan[0].size();
    int x, y;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (plan[i][j] == 's') {
                x = i; y = j;
            }
        }
    }
    
    int r = min(min(x, n - x - 1), min(y, m - y - 1));
    if (x == r) {
        for (int i = x - 1 ; i >= 0; i--) {
            int l = x - i;
            for (int j = y - l; j <= y + l; j++) plan[i][j]='#';
        }
    }

    if (y == r) {
        for (int j = y - 1; j >= 0; j--) {
            int l = y - j;
            for (int i = x - l; i <= x + l; i++) plan[i][j]='#';
        }
    }

    if (n - x - 1 == r) {
        for (int i = x + 1; i < n; i++) {
            int l = i - x;
            for (int j = y - l; j <= y + l; j++) plan[i][j]='#';
        }
    }

    if (m - y - 1 == r) {
        for (int j = y + 1; j < m; j++) {
            int l = j - y;
            for (int i = x - l; i <= x + l; i++) plan[i][j]='#';
        }
    }
    return plan;
}
