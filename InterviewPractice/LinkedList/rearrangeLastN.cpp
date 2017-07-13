// Definition for singly-linked list:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };

// my solution
ListNode<int> * rearrangeLastN(ListNode<int> * l, int n) {
    if (l == NULL) return NULL;
    vector <int> v;
    while (l != NULL) {
        v.push_back(l-> value);
        l = l-> next;
    }
    ListNode<int>* res = new ListNode<int>;
    ListNode<int>* currrentNode = res;
    ListNode<int>* previousNode = NULL;
    for (int i = v.size() - n; i < v.size(); i++) {
        currrentNode-> value = v[i];
        currrentNode-> next = new ListNode<int>;
        previousNode = currrentNode;
        currrentNode = currrentNode-> next;
    }
    for (int i = 0; i < v.size() - n; i++) {
        currrentNode-> value = v[i];
        currrentNode-> next = new ListNode<int>;
        previousNode = currrentNode;
        currrentNode = currrentNode-> next;
    }
    previousNode-> next = NULL;
    delete currrentNode;
    return res;
}

// ml9951's solution
ListNode<int> * rearrangeLastN(ListNode<int> * l, int n) {
    ListNode<int>* trailer = l;
    ListNode<int>* ptr = l;
    for(int i = 0; i < n; i++){
        ptr = ptr->next;
    }
    
    if(n == 0 || ptr == NULL)
        return l;
    
    while(ptr->next){
        ptr = ptr->next;
        trailer = trailer->next;
    }
    ListNode<int>* result = trailer->next;
    trailer->next = NULL;
    ptr->next = l;
    return result;
}
