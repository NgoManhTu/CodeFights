pair <int, int> calc(vector <int> A, vector <int> B) {
    pair <int, int> ans = make_pair(B[0] - A[0], B[1] - A[1]);
    int gcd = abs(__gcd(ans.first, ans.second));
    ans = make_pair(ans.first / gcd, ans.second / gcd);
    return ans;
}

bool perpendicular(pair <int, int> v1, pair <int, int> v2) {
    return v1.first * v1.second + v2.first * v2.second == 0;
}
bool isRectangle(std::vector<std::vector<int>> points) {
    pair <int, int> AB = calc(points[0], points[1]);
    pair <int, int> BC = calc(points[1], points[2]);
    pair <int, int> DC = calc(points[3], points[2]);
    pair <int, int> AD = calc(points[0], points[3]);
    if (AB == DC && AD == BC && perpendicular(AB, BC)) return true;
    return false;
}
