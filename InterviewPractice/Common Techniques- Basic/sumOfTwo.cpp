bool sumOfTwo(std::vector<int> a, std::vector<int> b, int v) {
    if (a.size() == 0 || b.size() == 0) return false;
    map <int, int> cnt;
    for (int i = 0; i < b.size(); i++) {
        cnt[b[i]]++;
    }
    for (int i = 0; i < a.size(); i++) {
        if (cnt[v - a[i]] > 0) return true;
    }
    return false;
} 
