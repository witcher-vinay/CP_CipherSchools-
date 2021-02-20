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

int largest(TreeNode * root, int &resSoFar) {
    if (root == NULL) {
        return 0;
    } 
    int l = largest(root->left, resSoFar);
    int r = largest(root->right, resSoFar);

    int curr = (root->data + l + r); 
    resSoFar = max(resSoFar, curr);
    return curr;
}

int largest(TreeNode * root) {
    int resSoFar = INT_MIN;
    int res = largest(root, resSoFar);
    return resSoFar;
}