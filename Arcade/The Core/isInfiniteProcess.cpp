bool isInfiniteProcess(int a, int b) {
    while (a < b) {
        a++;
        b--;
    }
    return !(a == b);
}
