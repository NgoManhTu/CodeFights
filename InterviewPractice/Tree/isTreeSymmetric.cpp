//
// Definition for binary tree:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };
// 
bool same(Tree<int>* subTreeLeft, Tree<int>* subTreeRight) {
    if (subTreeLeft == NULL && subTreeRight == NULL) return true;
    if (subTreeLeft == NULL || subTreeRight == NULL) return false;
    if (subTreeLeft-> value != subTreeRight-> value) return false;
    if (!same(subTreeLeft-> left, subTreeRight-> right)) return false;
    if (!same(subTreeLeft-> right, subTreeRight-> left)) return false;
    return true;
}

bool isTreeSymmetric(Tree<int> * t) {
    if (t == NULL) return true;
    return same(t-> left, t-> right);
}
