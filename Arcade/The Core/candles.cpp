int candles(int candlesNumber, int makeNew) {
    int res = candlesNumber;
    int leftOver = 0;
    while (candlesNumber > 0) {
        int total = candlesNumber + leftOver;
        candlesNumber = total / makeNew;
        leftOver = total % makeNew;
        res += candlesNumber;
    }
    return res;
}
