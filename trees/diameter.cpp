#include <bits/stdc++.h>
using namespace std;

class TreeNode {
    public:
    int data;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int data) {
        this->data = data;
        this->left = this->right = NULL;
    }
    TreeNode() {
        TreeNode(0);
    }
};
int diameter(TreeNode *root, int* height) {
    if (root == NULL) {
        *height = 0;
        return 0;
    }
    int lefth = 0, righth = 0, ld = 0, rd = 0;
    ld = diameter(root->left, &lefth);
    rd = diameter(root->right, &righth);
    *height = max(lefth, righth) + 1;
    return max(lefth + righth + 1, max(ld, rd));
}