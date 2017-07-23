bool insideCircle(std::vector<int> point, std::vector<int> center, int radius) {
    int dx = point[0] - center[0];
    int dy = point[1] - center[1];
    return dx * dx + dy * dy <= radius * radius;
}
