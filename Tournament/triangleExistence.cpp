bool triangleExistence(std::vector<int> sides) {
  std::sort(sides.begin(), sides.end());

  if (sides[0] + sides[1] > sides[2]) {
    return  true ;
  }
  return false;
}
