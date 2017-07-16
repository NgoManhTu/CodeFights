typedef std::vector<std::string> Array2D;

Array2D sortByLength(Array2D inputArray) {

  for (int i = 0; i < inputArray.size(); i++) {
    int minIndex = i;
    std::string tmp = inputArray[i];
    for (int j = i + 1; j < inputArray.size(); j++) {
      if ( inputArray[i].size() > inputArray[j].size() && minIndex == i ) {
        minIndex = j;
      }
    }
    inputArray[i] = inputArray[minIndex];
    inputArray[minIndex] = tmp;
  }

  return inputArray;
}
