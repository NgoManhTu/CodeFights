std::vector<std::vector<int>> spiralNumbers(int n) {
    vector < vector <int> > res(n);
    for (int i = 0; i < n; i++) res[i].resize(n);
    int col = 0, row = 0;
    int mxc = n - 1, mxr = n - 1;
    int mnc = 0, mnr = 0;
    int states = 0; /* states = 0 -> increase col 
                       states = 1 -> increase row
                       states = 2 -> decrease col
                       states = 3 -> decrease row*/
    for (int numbers = 1; numbers <= n * n; numbers++) {
        res[row][col] = numbers;
        switch (states) {
            case 0: if (col < mxc) {
                        col++;
                    } else {
                        states++;     
                        mnr++;
                        row++;
                    }
                    break;
           case 1:  if (row < mxr) {
                        row++;
                    } else {
                        states++;     
                        mxc--;
                        col--;
                    }
                    break;
           case 2:  if (col > mnc) {
                        col--;
                    } else {
                        states++;    
                        mxr--;
                        row--;
                    }
                    break;
           case 3:  if (row > mnr) {
                        row--;
                    } else {
                        states = 0;     
                        mnc++;
                        col++;
                    }
                    break;
        }
    }
    return res;
}