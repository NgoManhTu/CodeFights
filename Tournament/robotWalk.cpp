bool robotWalk(std::vector<int> a) {
    int mnx = 0, mny = -1, mxx = (int) 1e9, mxy = (int) 1e9;
    int x = 0, y = 0;
    for (int i = 0; i < a.size(); i++) {
        switch (i % 4) {
            case 0:
                y += a[i];
                if (y >= mxy) return true;
                mxy = y;
                break;
            case 1:
                x += a[i];
                if (x >= mxx) return true;                
                mxx = x;
                break;
            case 2:
                y -= a[i];
                if (y <= mny) return true;
                mny = y;
                break;
            case 3:
                x -= a[i];
                if (x <= mnx) return true;
                mnx = x;
                break;
        }
    }
    return false;    
}