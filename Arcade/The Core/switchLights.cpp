std::vector<int> switchLights(std::vector<int> a) {
    int sum[a.size()] = {0};
    for (int i = 0; i < a.size(); i++) {
        sum[0] += a[i];
        sum[i + 1] -= a[i];
    }
    for (int i = 1; i < a.size(); i++) {
        sum[i] += sum[i - 1];
    }
    vector <int> res;
    for (int i = 0; i < a.size(); i++) {
        res.push_back((a[i] + sum[i]) % 2);
    }
    return res;
} 
