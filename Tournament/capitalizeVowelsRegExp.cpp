std::string capitalizeVowelsRegExp(std::string inputString) {
  std::string lowercaseVowels = "aeiouy";
  for (int i = 0; i < lowercaseVowels.length(); i++) {
    std::regex regExp = std::regex(std::string(1, lowercaseVowels[i]));
    std::string symbolToString = std::string(1, toupper(lowercaseVowels[i]));
    inputString = std::regex_replace(inputString, 
      regExp, symbolToString);
  }
  return inputString;
}


bool isvowel(char x) {
    return (x == 'a' || x == 'u' || x == 'i' || x == 'u')
}

std::string capitalizeVowelsRegExp(std::string input) {
    for (int i = 0; i < input.size(); i++) {
        if (isvowel(input[i])) input[i] = toupper(input[i]);
    }
    return input;
}
