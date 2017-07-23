std::vector<int> fractionSubtraction(std::vector<int> a, std::vector<int> b) {
    vector <int> c = {a[0] * b[1] - a[1] * b[0], a[1] * b[1]};
    int gcd = __gcd(c[0], c[1]);
    c[0] /= gcd;
    c[1] /= gcd;
    return c;
}
