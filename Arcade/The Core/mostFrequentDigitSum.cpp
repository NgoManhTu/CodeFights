int calc(int x) {
    int ans = 0;
    while (x > 0) {
        ans += (x % 10);
        x /= 10;
    }
    return ans;
}

int mostFrequentDigitSum(int n) {
    int mostFrequent = 0;
    int cntMostFrequent = 0;
    map <int, int> cnt;
    cnt[calc(n)] = cntMostFrequent = 1;
    mostFrequent = calc(n);
    while (n > 0) {
        int x = n - calc(n);
        int y = calc(x);
        cnt[y]++;
        if (cnt[y] > cntMostFrequent) {
            cntMostFrequent = cnt[y];
            mostFrequent = y;
        }
        if (cnt[y] == cntMostFrequent && y > mostFrequent) {
            mostFrequent = y;
        }
        n = x;
    }
    return mostFrequent;
}
