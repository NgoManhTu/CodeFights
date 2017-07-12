int circleOfNumbers(int n, int firstNumber) {
    vector <int> circles(n + n);
    for (int i = 0; i < n; i++) {
        circles[i] = circles[i + n] = i;
    }
    return circles[firstNumber + (n / 2)];
}