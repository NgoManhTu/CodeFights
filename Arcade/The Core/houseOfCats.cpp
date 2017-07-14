std::vector<int> houseOfCats(int legs) {
    vector <int> res;
    while (legs >= 0) {
        if (legs % 2 == 0) {
            res.push_back(legs / 2);
        }
        legs -= 4;
    }
    reverse(res.begin(), res.end());
    return res;
}
