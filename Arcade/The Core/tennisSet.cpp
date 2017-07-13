bool tennisSet(int score1, int score2) {
    if (score1 < score2) {
        int tmp = score1;
        score1 = score2;
        score2 = tmp;
    }
    if (score1 == 6 && score2 < 5) return true;
    if (min(score2, score1) >= 5) {
        if (max(score1, score2) == 7 && min(score1, score2) < 7) {
            return true;
        }
    }
    return false;
}
