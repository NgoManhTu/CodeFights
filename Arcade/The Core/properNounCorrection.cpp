std::string properNounCorrection(std::string noun) {
    noun[0] = toupper(noun[0]);
    for (int i = 1; i < noun.size(); i++) {
        noun[i] = tolower(noun[i]);
    }
    return noun;
}
