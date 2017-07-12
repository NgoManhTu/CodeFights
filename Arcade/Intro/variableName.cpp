bool variableName(std::string name) {
    if (name[0] >= '0' && name[0] <= '9') return false;
    for (int i = 0; i < name.size(); i++) {
        if (!(isdigit(name[i]) || (name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z') || (name[i] == '_'))) return false; 
    }
    return true;
}
