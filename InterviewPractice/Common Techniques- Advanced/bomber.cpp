// O(N ^ 3) solution.
int bomber(std::vector<std::vector<char>> field) {
    int n = field.size();
    if (n == 0) return 0;
    int m = field[0].size();
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (field[i][j] != '0') continue;
            int destroyed = 0;
            int x, y;
            x = i;
            while (x >= 0) {
                if (field[x][j] == 'W') break;
                if (field[x][j] == 'E') destroyed++;
                x--;
            }
            x = i + 1;
            while (x < n) {
                if (field[x][j] == 'W') break;
                if (field[x][j] == 'E') destroyed++;
                x++;
            }
            y = j - 1;
            while (y >= 0) {
                if (field[i][y] == 'W') break;
                if (field[i][y] == 'E') destroyed++;
                y--;
            }
            y = j + 1;
            while (y < m) {
                if (field[i][y] == 'W') break;
                if (field[i][y] == 'E') destroyed++;
                y++;
            }
            res = max(res, destroyed);
        }
    }
    return res;
}
