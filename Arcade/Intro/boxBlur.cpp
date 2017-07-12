std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image) {
    int n = image.size(), m = image[0].size();
    vector <vector <int> > res(image.size() - 2);
    int dx[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < m - 1; j++) {
            int total = 0;
            for (int k = 0; k < 9; k++) {
                total += image[i + dx[k]][j + dy[k]];
            }
            res[i - 1].push_back(total / 9);
        }
    }
    return res;
}
