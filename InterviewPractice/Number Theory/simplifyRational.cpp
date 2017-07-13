std::vector<int> simplifyRational(int numerator, int denominator) {
    if (denominator < 0) {
        numerator = -1 * numerator;
        denominator = -1 * denominator;
    }
    int x = abs(__gcd(numerator, denominator));
    vector <int> res = {numerator / x, denominator / x};
    return res;
}
