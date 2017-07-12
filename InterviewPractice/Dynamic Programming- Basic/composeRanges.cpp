string convert(int x) {
    stringstream ans;
    ans << x;
    return ans.str();
}

std::vector<std::string> composeRanges(std::vector<int> nums) {
    vector <string> res;
    for (int i = 0, j = 0; i < nums.size(); ) {
        j = i + 1;
        while (nums[j] - nums[j - 1] == 1 && j < nums.size()) {
            ++j;
        }
        if (j - 1 == i) {
            res.push_back(convert(nums[i]));
        } else {
            res.push_back(convert(nums[i]) + "->" + convert(nums[j - 1]));
        }
        i = j;
    }
    return res;
}
