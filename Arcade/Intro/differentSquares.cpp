int differentSquares(std::vector<std::vector<int>> matrix) {
    int n = matrix.size(), m = matrix[0].size();
    vector < pair < pair <int, int>, pair <int, int> > > smallSquare;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            smallSquare.push_back(make_pair(make_pair(matrix[i][j], matrix[i + 1][j]), make_pair(matrix[i][j + 1], matrix[i + 1][j + 1])));
        }
    }
    sort(smallSquare.begin(), smallSquare.end());
    int res = 0;
    for (int i = 0, j = 0; i < smallSquare.size(); ) {
        while (smallSquare[j] == smallSquare[i] && j < smallSquare.size()) {
            ++j;
        }
        res++;
        i = j;
    }
    return res;
}
