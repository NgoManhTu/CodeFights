int countSumOfTwoRepresentations3(int n, int l, int r) {
  int res = 0;
  for (int i = 1; i <= n - i; i++) {
    if (l <= i && n - i <= r) res++;
  }
  return res;
}
