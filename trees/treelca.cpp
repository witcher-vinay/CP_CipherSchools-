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
TreeNode * LCA(TreeNode * root, TreeNode *a, TreeNode * b) {
    if (root == NULL) 
        return NULL;
    if (root == a || root == b) {
        return root;
    }
    TreeNode *l = LCA(root->left, a, b);
    TreeNode *r = LCA(root->right, a, b);
    if (l != NULL && r != NULL) {
        return root;
    } else {
        return (l != NULL? l : r);
    }
}