std::string whoseMove(std::string lastPlayer, bool win) {
  if (win) return lastPlayer;
  if (lastPlayer == "white") return "black";
  return "white";
}
