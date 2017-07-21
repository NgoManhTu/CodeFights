bool increaseNumberRoundness(int n) {
    bool ok = false;
    while (n > 0) {
        if (n % 10 == 0 && ok) {
            return true;
        } else if (n % 10 != 0) {
            ok = true;
        }
        n /=  10 ;
    }
    return false;  
}
