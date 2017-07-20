int maxFraction(std::vector<int> numerators, std::vector<int> denominators) {

  int maxFractionIndex = 0;
  for (int i = 1; i < numerators.size(); i++) {
    if (numerators[i] * denominators[maxFractionIndex] >
        numerators[maxFractionIndex] * denominators[i]) {
      maxFractionIndex = i;
    }
  }
  return maxFractionIndex;
}
