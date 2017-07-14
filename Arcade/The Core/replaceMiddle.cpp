std::vector<int> replaceMiddle(std::vector<int> arr) {
    int n = arr.size(); 
    if (n & 1) return arr;
    arr[(n - 1) / 2] += arr[n / 2];
    arr.erase(arr.begin() + n / 2);
    return arr;
}
