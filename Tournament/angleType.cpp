std::string angleType(int measure) {
    if (measure < 90) {
        return "acute";
    }
    if (measure == 90) {
        return "right";
    }
    if (measure < 180) {
        return "obtuse";
    }
    return "straight";
}
