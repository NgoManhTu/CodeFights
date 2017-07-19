std::vector<std::string> isDivisibleBy6(std::string inputString) {
  int digitSum = 0, lft = '0', rght = '9', pos = -1;
  std::vector<std::string> res;

  for (int i = 0; i < inputString.size(); i++) {
    if (lft <= inputString[i] && inputString[i] <= rght) {
      digitSum += inputString[i] - lft;
    } else {
      pos = i;
    }
  }

  for (int i = 0; i < 10; i++) {
    if ((digitSum + i) % 3 == 0) {
      inputString[pos] = char(lft + i);
      if ((inputString[inputString.size() - 1] - lft) % 2 == 0) {
        res.push_back(inputString);
      }
    }
  }

  return res;
}
