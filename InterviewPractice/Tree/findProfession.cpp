std::string findProfession(int level, int pos) {
    if (level == 1) return "Engineer";
    if (findProfession(level - 1, (pos + 1) / 2) == "Doctor") {
        return (pos & 1 ? "Doctor" : "Engineer");
    } else {
        return (pos & 1 ? "Engineer" : "Doctor");
    }
}
                          
