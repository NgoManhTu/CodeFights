bool hangman(std::string word, std::string letters) {
  bool needed[26] = {false};
  int need = 0;
  for (int i = 0; i < word.size(); i++) {
    int c = word[i] - 'a';
    if (!needed[c]) {
        needed[c] = true;
        need++;
    }
  }

  int missed = 0;
  for (int i = 0; i < letters.size() && missed < 6 && need > 0; i++) {
    int c = letters[i] - 'a';
    if (needed[c]) {
        needed[c] = false;
        need--;
    } else {
        missed++;
    }
  }

  return missed < 6 && need == 0;
}
