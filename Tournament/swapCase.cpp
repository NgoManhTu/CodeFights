std::string swapCase(std::string text) {
    for (int i = 0; i < text.size(); i++) {
        if ('a' <= text[i] && text[i] <= 'z') {
            text[i] = toupper(text[i]);
        } else {
            text[i] = tolower(text[i]);
        }
    }
    return text;
}
