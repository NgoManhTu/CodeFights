std::vector<std::vector<int>> roadsBuilding(int cities, std::vector<std::vector<int>> roads) {
    vector <vector<int>> res;
    bool connected[cities][cities];
    memset(connected, false, sizeof connected);
    for (int i = 0; i < cities; i++) connected[i][i] = true;
    for (int i = 0; i < roads.size(); i++) {
        int x = roads[i][0], y = roads[i][1];
        connected[x][y] = true;
        connected[y][x] = true;
    }
    for (int i = 0; i < cities; i++) {
        for (int j = 0; j < cities; j++) {
            if (connected[i][j] == false) {
                vector <int> add = {min(i, j), max(i, j)};
                res.push_back(add);
                connected[i][j] = true;
                connected[j][i] = true;
            }
        }
    }
    return res;
}