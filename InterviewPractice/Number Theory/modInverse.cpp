long long modInverse(long long n , long long m) {
    if (n == 1 && m == 2) return 1LL;
    if (__gcd(n , m) != 1) return -1LL;
    long long q, r, y0 = 0LL, y1 = 1LL, y, m0 = m;
    while (n > 0) {
        q = m / n;
        r = m % n;
        if (r == 0LL) return (y % m0 + m0) % m0;
        y = y0 - y1 * q;
        y0 = y1;
        y1 = y;
        m = n;
        n = r;
    }
    return -1;
}