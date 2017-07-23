std::vector<std::vector<int>> imageTruncation(std::vector<std::vector<int>> image, int threshold) {
    for (int i = 0; i < image.size(); i++) {
        for (int j = 0; j < image[0].size(); j++) {
            image[i][j] = min(image[i][j], threshold);
        }
    }
    return image;
}
