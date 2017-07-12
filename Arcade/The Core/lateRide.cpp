int lateRide(int n) {
    int hours = n / 60;
    int mins = n % 60;
    int res = 0;
    while (hours > 0) {
        res += (hours % 10);
        hours /= 10;
    }
    while (mins > 0) {
        res += (mins % 10);
        mins /= 10;
    }
    return res;
}
