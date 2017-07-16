int countSumOfTwoRepresentations3(int n, int l, int r) {
  int result = 0;

  for (int i = 1; i <= n - i; i++) {
    if (l <= n - i && i <= r) {
      result++;
    }
  }

  return result;
}
