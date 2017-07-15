const int md = (int) 1e9 + 7;

int countInversions(std::vector<int> a) {
    vector < pair <int, int> > v;
    int n = a.size();
    for (int i = 0; i < n; i++) {
        v.push_back(make_pair(a[i], i));
    }
    sort(v.begin(), v.end());
    map <int, int> bit;
    int res = 0;
    for (int i = 0; i < v.size(); i++) {
        for (int x = v[i].second + 1; x <= n; x += x & -x) res = (res + bit[x]) % md; 
        for (int x = v[i].second + 1; x > 0; x -= x & -x) bit[x]++;
    }
    return res;
}
