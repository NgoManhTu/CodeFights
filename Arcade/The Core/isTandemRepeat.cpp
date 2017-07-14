bool isTandemRepeat(std::string inputString) {
   if (inputString.size() & 1) return false;
   for (int i = 0, j = inputString.size() / 2; j < inputString.size(); i++, j++) {
      if (inputString[i] != inputString[j]) return false;
   }
   return true;
}
