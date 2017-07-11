std::vector<std::vector<int>> rotateImage(std::vector<std::vector<int>> a) {
     vector <vector <int> > result;
     result.resize(a.size());
     for (int i = 0; i < a.size(); i++) {
          result[i].resize(a[i].size());
          for (int j = 0; j < a[i].size(); j++) {
               result[i][j] = a[a[i].size() - j - 1][i];
          }
     }
     return result;
}
