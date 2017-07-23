bool efficientRoadNetwork(int n, std::vector<std::vector<int>> roads) {
    int dist[n][n];
    memset(dist, 0x3c3c3c, sizeof dist);
    for (int i = 0; i < n; i++) dist[i][i] = 0;
    for (int i = 0; i < roads.size(); i++) {
        int x = roads[i][0], y = roads[i][1];
        dist[x][y] = 1;
        dist[y][x] = 1;
    }
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    bool res = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] > 2) {
                res = false;
                break;
            }
        }
    }
    return res;
}