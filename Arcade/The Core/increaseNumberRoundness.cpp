bool increaseNumberRoundness(int n) {
    bool zeros = false;
    while (n % 10 == 0 && n > 0) {
        n /= 10;
    }
    while (n > 0) {
        if (n % 10 == 0) zeros = true;
        n /= 10;
    }
    return zeros;
}
