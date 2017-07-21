int nextPrime(int n) {
    for (int i = n + 1; ; i++) {
        bool ip = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                    ip = false;
                    break;
            }
        }
        if (ip) return i;
    }
}
