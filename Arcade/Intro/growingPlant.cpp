int growingPlant(int upSpeed, int downSpeed, int desiredHeight) {
    int days = 0;
    int nowHeight = 0;
    while (true) {
        nowHeight += upSpeed;
        if (nowHeight >= desiredHeight) {
            return days + 1;
        }
        days++;
        nowHeight -= downSpeed;
    }
}
