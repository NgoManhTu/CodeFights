bool bishopAndPawn(std::string bishop, std::string pawn) {
    int x = bishop[0] - 'A', y = bishop[1] - '0';
    int a = pawn[0] - 'A', b = pawn[1] - '0';
    return ((x - y == a - b) || (x + y == a + b));
}
