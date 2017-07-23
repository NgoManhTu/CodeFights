bool rightTriangle(std::vector<int> sides) {
    sort(sides.begin(), sides.end());
    int a = sides[0], b = sides[1], c = sides[2];
    return (a * a + b * b == c * c);
}
