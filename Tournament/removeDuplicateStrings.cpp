std::vector<std::string> removeDuplicateStrings(std::vector<std::string> inputArray) {
  std::vector<std::string> result;
  for (int i = 0; i < inputArray.size(); i++) {
    if (i + 1 < inputArray.size() && inputArray[i] == inputArray[i + 1]) {
      continue;
    }
    result.push_back(inputArray[i]);
  }
  return result;
}
