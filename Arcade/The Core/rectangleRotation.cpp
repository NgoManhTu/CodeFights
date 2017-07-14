int rectangleRotation(int a, int b) {
    int res = 0;
    for (int x = -a - b; x <= a + b; x++) {
        for (int y = -a - b; y <= a + b; y++) {
            if (2 * (x - y) * (x - y) <= a * a && 2 * (x + y) * (x + y) <= b * b) {
                res++;
            }
        }
    }
    return res;
}
