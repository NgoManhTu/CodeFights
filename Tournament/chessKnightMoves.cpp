bool isValid(int x, int y) {
    return (x >= 0 )
}

int chessKnightMoves(std::string cell) {
    int x = cell[0] - 'a';
    int y = cell[1] - '1';
    int res = 0;
    for (int dx = -2; dx <= 2; dx++) {
        for (int dy = -2; dy <= 2; dy++) {
            if (abs(dx * dy) == 2) {
                if (isValid(x + dx, y + dy)) {
                    res++;
                }
            }
        }
    }
    return res;
}
