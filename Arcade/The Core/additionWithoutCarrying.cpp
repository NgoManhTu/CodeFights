int additionWithoutCarrying(int param1, int param2) {
    if (param1 == 0 && param2 == 0) return 0;
    string result;
    while (param1 > 0 && param2 > 0) {
        result += char((param1 + param2) % 10 + 48);
        param1 /= 10;
        param2 /= 10;
    }
    while (param1 > 0) {
        result += char(param1 % 10 + 48);
        param1 /= 10;
    }
    while (param2 > 0) {
        result += char(param2 % 10 + 48);
        param2 /= 10;
    }
    reverse(result.begin(), result.end());
    return stoi(result);
}
