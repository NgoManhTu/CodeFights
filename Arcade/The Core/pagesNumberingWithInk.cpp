int calc(int x) {
    int digits = 0;
    while (x > 0) {
        digits++;
        x /= 10;
    }
    return digits;
}

int pagesNumberingWithInk(int current, int numberOfDigits) {
    while (numberOfDigits > 0) {
        numberOfDigits -= calc(current);
        current++;
    }
    return (numberOfDigits < 0 ? current - 2 : current - 1);
}
