std::vector<std::string> addBorder(std::vector<std::string> picture) {
    vector <string> result(picture.size() + 2);
    for (int i = 0; i < picture[0].size() + 2; i++) {
        result[0] += '*';
        result[picture.size() + 1] += '*';
    }
    for (int i = 1; i <= picture.size(); i++) {
        result[i] = '*' + picture[i - 1] + '*';
    }
    return result;
}
