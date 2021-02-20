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

bool isLeaf(TreeNode * root) {
    return (root->left == NULL && root->right == NULL);
}

void AllPaths(TreeNode * root, vector<int>& path) {
    if (root == NULL) {
        return;
    }
    path.push_back(root->data);
    if (isLeaf(root)) {
        for (int i = 0; i <path.size(); i++) {
            cout << path[i] << " ";
        }
        cout << "\n";
    } else {
        AllPaths(root->left, path);
        AllPaths(root->right, path);
    }
    path.pop_back();
}