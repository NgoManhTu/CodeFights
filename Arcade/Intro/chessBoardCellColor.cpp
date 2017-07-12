bool chessBoardCellColor(std::string cell1, std::string cell2) {
    int x = cell1[0] - 'A';
    int y = cell2[0] - 'A';
    int a = cell1[1] - '0';
    int b = cell2[1] - '0';
    if (x % 2 == y % 2) return (a % 2 == b % 2);
    return (a % 2 != b % 2);
}
