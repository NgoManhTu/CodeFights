bool validTime(std::string time) {
    if (time.size() != 5 && time[2] != ':') return false;
    int hour = (time[0] - 48) * 10 + time[1] - 48;
    int mins = (time[3] - 48) * 10 + time[4] - 48;
    if (hour >= 24 || mins > 59) return false;
    return true;
}
