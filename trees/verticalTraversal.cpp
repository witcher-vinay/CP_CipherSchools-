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
void vertical(TreeNode * root, int level, map<int, vector<int>>& levelNodes) {
    if (root == NULL) {
        return;
    }
    levelNodes[level].push_back(root->data);
    vertical(root->left, level - 1, levelNodes);
    vertical(root->right, level + 1, levelNodes);
}
void vertical(TreeNode *root) {
    map<int, vector<int>> levelNodes;
    vertical(root, 0, levelNodes);
    for (auto itr = levelNodes.begin(); itr != levelNodes.end(); itr++) {
        for (int i = 0; i < itr->second.size(); i++) {
            cout << itr->second[i] << " ";
        }
        cout << "\n";
    }
}