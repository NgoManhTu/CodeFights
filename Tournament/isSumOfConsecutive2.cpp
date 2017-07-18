int isSumOfConsecutive2(int n) {
  int res = 0;
  for (int i = 1; i < n; i++) {
    int m = n, j = i;
    while (m > 0) {
      m -= j;
      j++;
    }
    if (!m) {
      res++;
    }
  }
  return res;
}
