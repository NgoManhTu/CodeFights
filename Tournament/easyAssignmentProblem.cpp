std::vector<int> easyAssignmentProblem(std::vector<std::vector<int>> skills) {
    vector <int> res;
    if (skills[0][0] - skills[1][0] > skills[0][1] - skills[1][1]) {
        res = {1, 2};
    } else {
        res = {2, 1};
    }
    return res;
}
