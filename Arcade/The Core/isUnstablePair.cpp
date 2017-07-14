bool isUnstablePair(std::string filename1, std::string filename2) {
    string lowerFilename1 = filename1, lowerFilename2 = filename2;
    for (int i = 0; i < filename1.size(); i++) {
        lowerFilename1[i] = tolower(filename1[i]);
    }
    for (int j = 0; j < filename2.size(); j++) {
        lowerFilename2[j] = tolower(filename2[j]);
    }
    return (filename1 < filename2) != (lowerFilename1 < lowerFilename2);
}
