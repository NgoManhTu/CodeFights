bool isLowerTriangularMatrix(std::vector<std::vector<int>> matrix) {
    for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.size(); j++) {
                if (j > i) {
                    if (matrix[i][j] != 0) return false;
                }
            }
        }
    return true;
}
