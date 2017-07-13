std::vector<int> metroCard(int lastNumberOfDays) {
    vector <int> res;
    if (lastNumberOfDays == 30 || lastNumberOfDays==28) {
        res = {31} ;
        return res;
    } else {
        res = {28, 30, 31}; 
        return res; 
    }
}
