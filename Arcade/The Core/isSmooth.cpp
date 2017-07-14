bool isSmooth(std::vector<int> arr) {
    int n = arr.size();
    int firstElement = arr[0];
    int lastElement = arr[n - 1];
    if (firstElement != lastElement) return false;
    return (n & 1 ? arr[(n - 1) / 2] == firstElement : arr[(n - 1) / 2] + arr[n / 2] == firstElement);
}
