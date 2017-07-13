// Definition for singly-linked list:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//
ListNode<int> * mergeTwoLinkedLists(ListNode<int> * l1, ListNode<int> * l2) {
    if (l1 == NULL && l2 == NULL) return NULL;
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;
    ListNode<int>* l3 = new ListNode<int>;
    ListNode<int>* currentNode = l3;
    ListNode<int>* previousNode = NULL;
    while (l1 != NULL && l2 != NULL) {
        if (l1-> value <= l2-> value) {
            currentNode-> value = l1-> value;
            l1 = l1-> next;
            currentNode-> next = new ListNode<int>;
            previousNode = currentNode;
            currentNode = currentNode-> next;
        } else {
            currentNode-> value = l2-> value;
            l2 = l2-> next;
            currentNode-> next = new ListNode<int>;
            previousNode = currentNode;
            currentNode = currentNode-> next;
        }
    }
    while (l1 != NULL) {
        currentNode-> value = l1-> value;
        l1 = l1-> next;
        currentNode-> next = new ListNode<int>;
        previousNode = currentNode;
        currentNode = currentNode-> next;
    }
    while (l2 != NULL) {
        currentNode-> value = l2-> value;
        l2 = l2-> next;
        currentNode-> next = new ListNode<int>;
        previousNode = currentNode;
        currentNode = currentNode-> next;
    }
    previousNode-> next = NULL;
    delete currentNode;
    return l3;
}
