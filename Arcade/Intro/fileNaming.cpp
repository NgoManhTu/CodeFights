std::vector<std::string> fileNaming(std::vector<std::string> names) {
    map <string, bool> exist; 
    vector <string> res;
    for (int i = 0; i < names.size(); i++) {
        string str = names[i];
        if (exist[str] == false) {
            res.push_back(str);
            exist[str] = true;
        } else {
            int k = 0;
            while (true) {
                k++;
                string kStr = "";
                int last = k;
                do {
                    kStr.push_back(k % 10 + '0');
                    k /= 10;
                } while (k);
                string tmp = "";
                for (int j = 0; j < str.size(); j++) {
                    tmp.push_back(str[j]);
                }
                tmp.push_back('(');
                for (int j = kStr.size() - 1; j >= 0; j--) {
                    tmp.push_back(kStr[j]);
                }
                tmp.push_back(')');
                if (exist[tmp] == false) {
                    res.push_back(tmp);
                    exist[tmp] = true;
                    break;
                }
                k = last;
              
            }
        }
    }
    return res;
}