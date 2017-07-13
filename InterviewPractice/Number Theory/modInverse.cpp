long long modInverse(long long n , long long m) {
    if (n == 1 && m == 2) return 1LL;
    if (__gcd(n , m) != 1) return -1LL;
    long long q, r, b = 0LL, c = 1LL, a, md = m;
    while (n > 0) {
        q = m / n;
        r = m % n;
        if (r == 0LL) return (a % md + md) % md;
        a = b - c * q;
        b = c;
        c = a;
        m = n;
        n = r;
    }
    return -1;
}