int firstMultiple(std::vector<int> divisors, int start) {
    for (int i = start; ; i++) {
        bool divided = true;
        for (int j = 0; j < divisors.size(); j++) {
            if (i % divisors[j] != 0) {
                divided = false;
                break;
            }
        }
        if (divided) return i;
    }
}
