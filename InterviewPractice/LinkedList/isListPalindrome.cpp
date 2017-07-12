// Definition for singly-linked list:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//
bool isListPalindrome(ListNode<int> * l) {
    vector <int> numbers;
    while (l != NULL) {
        numbers.push_back(l-> value);
        l = l-> next;
    }
    for (int l = 0, r = numbers.size() - 1; l <= r; l++, r--) {
        if (numbers[l] != numbers[r]) return false;
    }
    return true;
}
