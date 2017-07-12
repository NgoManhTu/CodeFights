std::string reverseParentheses(std::string s) {
    stack <int> openBracket;
    int level = 0;
    vector <pair <int, pair <int, int> > > segments;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            openBracket.push(i);
            level++;
        } else if (s[i] == ')') {
            int l = openBracket.top() + 1;
            while (s[l] == '(' && l < s.size()) ++l;
            int r = i - 1;
            while (s[r] == ')' && r >= 0) --r;
            segments.push_back(make_pair(level, make_pair(l, r)));
            openBracket.pop();
            level--;
        }
    }
    sort(segments.begin(), segments.end(), greater< pair <int, pair <int, int> > >());
    string t;
    map <int, int> where;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] != ')' && s[i] != '(') {
        t += s[i];
        where[i] = t.size() - 1;
      }
    }
    for (int i = 0; i < segments.size(); i++) {
      int l = where[segments[i].second.first];
      int r = where[segments[i].second.second];
    } 
    
    for (int i = 0; i < segments.size(); i++) {
        int l = where[segments[i].second.first];
        int r = where[segments[i].second.second];
        while (l < r) {
            swap(t[l], t[r]);
            l++;
            r--;
        }
    }
    return t;
}
