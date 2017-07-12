int maxMultiple(int divisor, int bound) {
    while (bound % divisor) {
        bound--;
    }
    return bound;
}
