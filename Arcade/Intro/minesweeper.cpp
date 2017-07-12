std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> matrix) {
    vector < vector <int> > res(matrix.size());
    for (int i = 0; i < matrix.size(); i++) res[i].resize(matrix[i].size());
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            for (int ii = max(0, i - 1); ii <= min(i + 1, (int) matrix.size() - 1); ii++) {
                for (int jj = max(0, j - 1); jj <= min(j + 1, (int) matrix[0].size() - 1); jj++) {
                    if (matrix[ii][jj] && (i != ii || jj != j)) {
                        res[i][j]++;                        
                    }
                }
            }
        }
    }
    return res;
}
