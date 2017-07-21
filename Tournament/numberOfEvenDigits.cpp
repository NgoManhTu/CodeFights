int numberOfEvenDigits(int n) {
    int res = 0;
    while (n > 0) {
        if ((n % 10) % 2 == 0) res++;
        n /= 10;
    }
    return res;
}
