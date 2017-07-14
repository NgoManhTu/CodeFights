const int BASE = 10000;
const int N = (int) 1e5 + 10;

int numbersGrouping(std::vector<int> a) {
    int cnt[N] = {0};
    for (int i = 0; i < a.size(); i++) {
        int j = (a[i] - 1) / BASE;
        cnt[j] += 1 + (cnt[j] == 0);
    }
    int res = 0;
    for (int i = 0; i < N; i++) res += cnt[i];
    return res;
}
