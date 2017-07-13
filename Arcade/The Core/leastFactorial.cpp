int leastFactorial(int n) {
    while (true) {
        int m = n;
        int factor = 2;
        bool content = true;
        while (m > 1) {
            if (m % factor != 0) {
                content = false;
                break;
            }
            m /= factor;
            factor++;
        }
        if (content) return n;
        n++;
    }
}
