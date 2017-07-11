bool sudoku2(std::vector<std::vector<char>> grid) {
    
    int cnt[10];
    for (int i = 0; i < grid.size(); i++) {
        for (int loop = 0; loop <= 9; loop++) cnt[loop] = 0;
        for (int j = 0; j < grid.size(); j++) {
            if (grid[i][j] == '.') continue;
            cnt[grid[i][j] - '0']++;
            if (cnt[grid[i][j] - '0'] > 1) return false;
        }
    }
    
    for (int i = 0; i < grid.size(); i++) {
        for (int loop = 0; loop <= 9; loop++) cnt[loop] = 0;
        for (int j = 0; j < grid.size(); j++) {
            if (grid[j][i] == '.') continue;
            cnt[grid[j][i] - '0']++;
            if (cnt[grid[j][i] - '0'] > 1) return false;
        }
    }

    for (int i = 0; i < grid.size(); i += 3) {
        for (int j = 0; j < grid.size(); j += 3) {
            for (int loop = 0; loop <= 9; loop++) cnt[loop] = 0;
            for (int x = i; x <= i + 2; x++) {
                for (int y = j; y <= j + 2; y++) {
                    if (grid[x][y] == '.') continue;
                    cnt[grid[x][y] - '0']++;
                    if (cnt[grid[x][y] - '0'] > 1) return false;
                }
            }
        }
    }
    return true;
}
