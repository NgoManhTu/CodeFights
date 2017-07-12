const int md = (int) 1e9 + 7;

int mapDecoding(std::string message) {
    int n = message.size();
    int f[n + 1] = {0};
    char s[n + 1];
    for (int i = 1; i <= n; i++) {
        s[i] = message[i - 1];
    }
    s[0] = '@';
    f[0] = 1;
    for (int i = 1; i <= n; i++) {
        if (s[i] != '0') f[i] = (f[i] + f[i - 1]) % md;
        int x = s[i - 1] - '0';
        int y = s[i] - '0';
        if (x == 1) {
            f[i] = (f[i] + f[i - 2]) % md;
        } else if (x == 2 && y >= 0 && y <= 6) {
            f[i] = (f[i] + f[i - 2]) % md;
        }
    }
    return f[n];
}
