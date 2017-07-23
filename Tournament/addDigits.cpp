std::string addDigits(int a, int b, int n) {
    int x = a;
    string res = to_string(a);
    for (int i = 0; i < n; i++) {
        int best = -1;
        for (int j = 9; j >= 0; j--) {
            if ((x * 10 + j) % b == 0) {
                best = j;
                break;
            }
        }
        if (best == -1) {
            break;
        }
        res += '0' + best;
        x = (x * 10 + best) % b;
    }
    return res;
}
