bool almostIncreasingSequence(std::vector<int> sequence) {
    bool foundOne = false;
    for (int i = -1, j = 0, k = 1; k < sequence.size(); k++) { 
        bool deleteCurrent = false; 
        if (sequence[j] >= sequence[k]) {
            if (foundOne) {
                return false;
            }
            foundOne = true;
            if (k > 1 && sequence[i] >= sequence[k]) {
                deleteCurrent = true;
            }
        }
        if (!foundOne) {
            i = j;
        }
        if (!deleteCurrent) {
            j = k;
        }
    }
 
    return true;
}
