int sqr(int x) {
    return x * x;
}

int squareDigits(int x) {
    int ans = 0;
    while (x > 0) {
        ans += sqr(x % 10);
        x /= 10;
    }
    return ans;
}

int squareDigitsSequence(int a0) {
    map <int, bool> exist;
    exist[a0] = true;
    int len = 1;
    while (true) {
        a0 = squareDigits(a0);
        ++len;
        if (exist[a0]) break;
        exist[a0] = true;
    }
    return len;
}
