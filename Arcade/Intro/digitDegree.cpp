int digitDegree(int n) {
    int degree = 0;
    while (n >= 10) {
        int newn = 0;
        while (n > 0) {
            newn += (n % 10);
            n /= 10;
        }
        degree++;
        n = newn;
    }
    return degree;
}
