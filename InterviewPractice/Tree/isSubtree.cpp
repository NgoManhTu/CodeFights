//
// Definition for binary tree:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };

bool check(Tree<int>* x, Tree<int>* y) {
    if (x == NULL && y == NULL) return true;
    if (x == NULL || y == NULL) return false;
    return x-> value == y-> value && check(x-> left, y-> left) && check(x-> right, y-> right);
}

bool isSubtree(Tree<int> * t1, Tree<int> * t2) {
    if (t2 == NULL) return true;
    if (t1 == NULL) return false;
    if (check(t1, t2)) return true;
    return (isSubtree(t1-> left, t2) || isSubtree(t1-> right, t2));
}
