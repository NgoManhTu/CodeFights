int commonPoints(int l1, int r1, int l2, int r2) {
    return min(r1, r2) - max(l1, l2) - 1;
}
