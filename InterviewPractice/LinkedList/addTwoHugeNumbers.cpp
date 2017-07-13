// Definition for singly-linked list:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//

const int BASE = 10000;

vector <int> add(vector <int> a, vector <int> b) { 
    vector <int> ans(max(a.size(), b.size()));
    int carry = 0;
    reverse(a.begin(), a.end());        reverse(b.begin(), b.end());
    a.resize(max(a.size(), b.size()));  b.resize(max(b.size(), a.size()));
    for (int i = 0; i < ans.size(); i++) {
        int digit = carry + a[i] + b[i];
        carry = digit / BASE;
        ans[i] = digit % BASE;
    }
    while (carry) {
        ans.push_back(carry % BASE);
        carry /= BASE;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

ListNode<int> * addTwoHugeNumbers(ListNode<int> * a, ListNode<int> * b) {
    vector <int> firstNumber, secondNumber;
    while (a != NULL) {
        firstNumber.push_back(a-> value);
        a = a-> next;
    }
    while (b != NULL) {
        secondNumber.push_back(b-> value);
        b = b-> next;
    }
    vector <int> res = add(firstNumber, secondNumber);
    ListNode<int>* c = new ListNode<int>;
    ListNode<int>* currentNode = c;
    for (int i = 0; i < res.size(); i++) {
        currentNode-> value = res[i];
        if (i == res.size() - 1) continue;
        currentNode-> next = new ListNode<int>;
        currentNode = currentNode-> next;
    }
    return c;
}
