int bfsDistancesUnweightedGraph2(std::vector<std::vector<bool>> matrix, int vertex1, int vertex2) {
    bool was[matrix.size()] = {false};
    int dist[matrix.size()] = {0};
    was[vertex1] = true;
    queue <int> q;
    q.push(vertex1);
    while (!q.empty()) {
        int u = q.front(); 
        q.pop();
        was[u] = true;
        for (int i = 0; i < matrix.size(); i++) {
            if (matrix[u][i] && !was[i]) {
                was[i] = true;
                dist[i] = dist[u] + 1 ;
                q.push(i);
            }
        }
    }
    return dist[vertex2];
}
return !a && !b;
 