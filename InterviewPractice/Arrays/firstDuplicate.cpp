int firstDuplicate(std::vector<int> a) {
    map <int, bool> exist;
    for (int i = 0; i < a.size(); i++) {
        if (exist[a[i]]) {
            return a[i];
        } 
        exist[a[i]] = true;
    }
    return -1;
}
