int sumBelowBound(int bound) {
    int sum = 0;
    for (int i = 1; ; i++) {
        sum += i;
        if (sum > bound) return i - 1;
    }
}
