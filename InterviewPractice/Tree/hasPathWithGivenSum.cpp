//
// Definition for binary tree:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };
bool hasPathWithGivenSum(Tree<int> * t, int s) {
    if (t == NULL) return (s == 0);
    if (t-> left == NULL && t-> right == NULL) return (s - t-> value == 0);
    bool hasLeft = false, hasRight = false;
    if (t-> left != NULL) {
        hasLeft = hasPathWithGivenSum(t-> left, s - t-> value);
    } 
    if (t-> right != NULL) {
        hasRight = hasPathWithGivenSum(t-> right, s - t-> value);
    }
    return (hasLeft || hasRight);
}
