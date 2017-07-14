int makeArrayConsecutive2(std::vector<int> statues) {
    sort(statues.begin(), statues.end());
    int res = 0;
    for (int i = 1; i < statues.size(); i++) {
        res += (statues[i] - statues[i - 1] - 1);
    }
    return res;
}
