bool isPower(int n) {
    if (n == 1) return true;
    for (int i = 2; i * i <= n; i++) {
        int m = n;
        while (m > 1) {
            if (m % i == 0) {
                m /= i; 
            } else {
                break;
            }
        }
        if (m == 1) return true;
    }
    return false;
}
