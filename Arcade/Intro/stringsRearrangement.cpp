bool stringsRearrangement(std::vector<std::string> inputArray) {
     int p[inputArray.size()];
     int l = inputArray[0].size();
     for (int i = 0; i < inputArray.size(); i++) p[i] = i;
     do {
          bool ok = true;
          for (int i = 0; i < inputArray.size() - 1; i++) {
               int differ = 0;
               for (int j = 0; j < l; j++) {
                    if (inputArray[p[i]][j] != inputArray[p[i + 1]][j]) {
                         differ++;
                    }
               }
               if (differ != 1) {
                    ok = false;
                    break;
               }
          }
          if (ok) return ok;
     } while (next_permutation(p, p + inputArray.size()));
     return false;
}
