std::vector<int> findLongestSubarrayBySum(int s, std::vector<int> arr) {
    vector <int> res = {-1};
    map <int, int> position;
    position[0] = 0;
    int sum = 0;
    int mxl = 0;
    for (int i = 0, sz = arr.size(); i < sz; i++) {
        sum += arr[i];
        if (sum == s) {
            if (i + 1 > mxl) {
                mxl = i + 1;
                res.clear();
                res.push_back(1);
                res.push_back(i + 1);
            }
        } else {
            if (position[sum - s] > 0) {
                if (i  + 1 - position[sum - s] > mxl) {
                    mxl = i - position[sum - s];
                    res.clear();
                    res.push_back(position[sum - s] + 1);
                    res.push_back(i + 1);
                }
            } 
        }
        if (position[sum] == 0) {
            position[sum] = i + 1;
        }
    }
    return res;
}