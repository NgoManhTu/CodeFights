std::vector<std::vector<int>> reverseOnDiagonals(std::vector<std::vector<int>> matrix) {
    int n = matrix.size();
    vector <vector<int>> res(n);
    for (int i = 0; i < n; i++) res[i].resize(matrix[i].size());
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j + 1 == n) {
                res[i][j] = matrix[n - 1 - i][n - 1 - j];
            } else {
                res[i][j] = matrix[i][j];
            }
        }
    }
    return res;
}
