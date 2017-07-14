int calc(int x) {
    int ans = 0;
    while (x > 0) {
        ans += (x % 10);
        x /= 10;
    }
    return ans;
}

bool comfortable(int x, int y) {
    if (y > x + calc(x) || y < x - calc(x)) return false;
    if (x > y + calc(y) || x < y - calc(y)) return false;
    return true;
}

int comfortableNumbers(int l, int r) {
    int res = 0;
    for (int i = l; i < r; i++) {
        for (int j = i + 1; j <= r; j++) {
            if (comfortable(i, j)) {
                ++res;
            }
        }
    }
    return res;
}
