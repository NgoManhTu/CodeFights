//
// Definition for binary tree:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };
int kthLargestInBST(Tree<int> * t, int k) {
    vector <int> valueInTree;
    queue < Tree<int>* > q;
    q.push(t);
    while (!q.empty()) {
        Tree<int>* Front = q.front();
        q.pop();
        valueInTree.push_back(Front-> value);
        if (Front-> left != NULL) {
            q.push(Front-> left);
        }
        if (Front-> right != NULL) {
            q.push(Front-> right);
        }
    }
    sort(valueInTree.begin(), valueInTree.e
    return valueInTree[k - 1];
}
