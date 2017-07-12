bool sudoku(std::vector<std::vector<int>> grid) {
    // check row
    int cnt[10];
    for (int i = 0; i < 9; i++) {
        fill(cnt, cnt + 10, 0);
        for (int j = 0; j < 9; j++) {
            cnt[grid[i][j]]++;
            if (cnt[grid[i][j]] > 1) return false;
        }
    }
    // check col
    for (int j = 0; j < 9; j++) {
        fill(cnt, cnt + 10, 0);
        for (int i = 0; i < 9; i++) {
            cnt[grid[i][j]]++;
            if (cnt[grid[i][j]] > 1) return false;
        }
    }
    // check 3 x 3
    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            fill(cnt, cnt + 10, 0);
            for (int x = i; x <= i + 2; x++) {
                for (int y = j; y <= j + 2; y++) {
                    cnt[grid[x][y]]++;
                    if (cnt[grid[x][y]] > 1) return false;
                }
            }
        }
    }
    return true;
}
