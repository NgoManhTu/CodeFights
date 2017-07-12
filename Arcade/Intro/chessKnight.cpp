int chessKnight(std::string cell) {
    int x = cell[0] - 'a' + 1, y = cell[1] - '0';
    int dx[] = {-1, -2, -2, -1, 1, 2, 2, 1};
    int dy[] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int res = 0;
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx > 0 && ny > 0 && nx < 9 && ny < 9) res++;
    }
    return res;
}
