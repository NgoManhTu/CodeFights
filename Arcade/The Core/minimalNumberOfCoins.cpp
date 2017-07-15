int minimalNumberOfCoins(std::vector<int> coins, int price) {
    int res = 0;
    for (int i = coins.size() - 1; i >= 0; i--) {
        res += (price / coins[i]);
        price = price % coins[i];
    }
    return res;
}
