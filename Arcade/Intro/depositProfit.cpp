int depositProfit(int deposit, int rate, int threshold) {
    double x = deposit * 1.0;
    double increase = (100.0 + 1.0 * rate) / 100;
    int years = 0;
    while (x < 1.0 * threshold) {
        x *= increase;
        years++;
    }
    return years;
}
