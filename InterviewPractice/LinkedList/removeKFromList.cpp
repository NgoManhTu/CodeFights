// Definition for singly-linked list:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//
ListNode<int> * removeKFromList(ListNode<int> * l, int k) {
     if (l == NULL) return NULL;
     ListNode<int>* currentNode = l;
     ListNode<int>* previousNode = NULL;
     while (currentNode != NULL) {
          if (currentNode-> value == k) {
               if (previousNode != NULL) {
                    previousNode-> next = currentNode-> next;
                    currentNode-> next = NULL;
                    delete currentNode;
                    currentNode = previousNode-> next;
               } else {
                    l = currentNode-> next;
                    currentNode = currentNode-> next;
               }
          } else {
               previousNode = currentNode;
               currentNode = currentNode-> next;
          }
     }
     return (l == NULL ? NULL : l);
}
