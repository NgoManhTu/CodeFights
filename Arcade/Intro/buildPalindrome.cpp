std::string buildPalindrome(std::string st) {
    int mxl = 0;
    string tmp;
    for (int i = st.size() - 1; i >= 0; i--) {
        tmp += st[i];
        bool ispalin = true;
        for (int l = 0, r = tmp.size() - 1; l <= r; l++, r--) {
            if (tmp[l] != tmp[r]) {
                ispalin = false;
                break;
            }
        }
        if (ispalin) {
            mxl = tmp.size();
        }
    }
    string res = st;
    for (int i = st.size() - 1 - mxl; i >= 0; i--) {
        res += st[i];
    }
    return res;
}
