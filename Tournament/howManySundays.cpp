int howManySundays(int n, std::string startDay) {
    vector <string> week = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int p = 0;
    for (int i = 0; i < week.size(); i++) {
        if (week[i] == startDay) {
            p = i;
            break;
        }
    }
    return (n + p) / week.size();
}
