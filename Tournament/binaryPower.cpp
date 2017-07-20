int binaryPower(int n, int k) {
  const int MOD = int(1e7) + 7;

  if (k == 0) {
    return 1;
  }
  if (k % 2 == 0) {
    return binaryPower((n * 1ll * n) % MOD, k / 2);
  }
  return (binaryPower(n, k - 1) * 1ll * n) % MOD;
}
