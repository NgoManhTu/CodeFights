bool isSubstitutionCipher(std::string string1, std::string string2) {
    map <int, int> pairWith;
    map <int, bool> paired;
    for (int i = 0; i < string1.size(); i++) {
        if (pairWith[string1[i]] != string2[i] && (paired[string2[i]] || pairWith[string1[i]] != 0)) return false;
        pairWith[string1[i]] = string2[i];
        paired[string2[i]] = true;
    }
    return true;
}
