// Definition for singly-linked list:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//
ListNode<int> * reverseNodesInKGroups(ListNode<int> * l, int k) {
    vector <int> v;
    while (l != NULL) {
        v.push_back(l-> value);
        l = l-> next;
    }
    for (int i = 0; i < v.size(); i += k) {
        if (i + k - 1 > v.size() - 1) continue;
        for (int l = i, r = i + k - 1; l < r; l++, r--) {
            swap(v[l], v[r]);
        }
    }
    ListNode<int>* res = new ListNode<int>;
    ListNode<int>* currentNode = res;
    for (int i = 0; i < v.size(); i++) {
        currentNode-> value = v[i];
        if (i == v.size() - 1) continue;
        currentNode-> next = new ListNode<int>;
        currentNode = currentNode-> next;
    }
    return res;
}
