bool equationTemplate(std::vector<int> values) {
    for (int i = 0; i < values.size(); i++) {
        for (int j = 0; j < values.size(); j++) {
            for (int x = 0; x < values.size(); x++) {
                for (int y = 0; y < values.size(); y++) {
                    if (i == j || i == x || i == y) continue;
                    if (j == x || j == y) continue;
                    if (x == y) continue;
                    if (values[i] * values[j] == values[x] * values[y]) return true;
                    if (values[i] * values[j] * values[x] == values[y]) return true;
                }
            }
        }
    }
    return falsel
}
