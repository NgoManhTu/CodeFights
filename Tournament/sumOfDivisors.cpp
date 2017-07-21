int sumOfDivisors(int n) {
    int s = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            s += i;
            if (i * i != n) s += (n / i); 
        }
    }
    return s;
}
