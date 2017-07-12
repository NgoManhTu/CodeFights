std::vector<int> sortByHeight(std::vector<int> a) {
    vector <int> person;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != -1) {
            person.push_back(a[i]);
        }
    }
    sort(person.begin(), person.end());
    for (int i = 0, j = 0; i < a.size() && j < person.size(); i++) {
        if (a[i] == -1) continue;
        a[i] = person[j];
        ++j;
    }
    return a;
}
