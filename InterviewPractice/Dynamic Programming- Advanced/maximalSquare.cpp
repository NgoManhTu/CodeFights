int maximalSquare(std::vector<std::vector<char>> matrix) {
    if (matrix.size() == 0) return 0;
    int n = matrix.size(), m = matrix[0].size();
    if (m == 0) return 0;
    int s[n + 1][m + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            s[i][j] = s[i - 1][j] + s[i][j - 1] + - s[i - 1][j - 1] + (matrix[i - 1][j - 1] - '0');
        }
    }
    int res = 0;
    for (int low = 1, high = max(n, m), mid; low <= high; ) {
        mid = (low + high) / 2;
        bool checked = false;
        for (int i = 1; i <= n - mid + 1 && checked == false; i++) {
            for (int j = 1; j <= m - mid + 1; j++) {
                int x = s[i + mid - 1][j + mid - 1] + s[i - 1][j - 1] - s[i + mid - 1][j - 1] - s[i - 1][j + mid - 1]; 
                if (x == mid * mid) {
                    checked = true;
                    break;
                }
            }
        }
        if (checked) {
            res = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    } 
    return res * res;
}
