int appleBoxes(int k) {
    int yellowApples = 0, redApples = 0;
    for (int i = 1; i <= k; i++) {
        if (i & 1) {
            yellowApples += i * i;
        } else {
            redApples += i * i;
        }
    }
    return (redApples - yellowApples);
}
