int piecesOfDistinctLengths(int strawLength) {
    int res = 0;
    for (int i = 1; i <= strawLength; i++) {
        res++;
        strawLength -= i;
    }
    return res;
}
