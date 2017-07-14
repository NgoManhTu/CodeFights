int calc(int x) {
    if (x == 1) return 1;
    int ans = 0;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            if (i * i == x) {
                ans++;
            } else {
                ans += 2;
            }
        }
    }
    return ans;
}

std::vector<int> weakNumbers(int n) {
    int weakest = 0;
    int divisor[n + 1];
    int cntWeakest = 0;
    for (int i = 1; i <= n; i++) {
        divisor[i] = calc(i);
        int weekness = 0;
        for (int j = 1; j < i; j++) {
            if (divisor[i] < divisor[j]) {
                weekness++;
            }
        }
        if (weekness > weakest) {
            weakest = weekness;
            cntWeakest = 1;
        } else if (weekness == weakest) {
            cntWeakest++;
        }
    }
    vector <int> res = {weakest, cntWeakest};
    return res;
}
