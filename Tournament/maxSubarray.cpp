int maxSubarray(std::vector<int> inputArray) {
    int max_ending_here = 0, max_so_far = 0;
    for (int i = 0; i < inputArray.size(); i++) {
        max_ending_here = max(0, max_ending_here + inputArray[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;
}
