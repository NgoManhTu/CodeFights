int matrixElementsSum(std::vector<std::vector<int>> matrix) {
    int n = matrix.size(), m = matrix[0].size();
    bool was;
    for (int i = 0; i < m; i++) {
        was = false;
        for (int j = 0; j < n; j++) {
            if (matrix[j][i] == 0) was = true;
            if (was) matrix[j][i] = 0;
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            res += matrix[i][j];
        }
    }
    return res;
}
