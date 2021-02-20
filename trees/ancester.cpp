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
bool findAncestors(TreeNode* root, TreeNode * x, vector<int>& path) {
    if (root == NULL) 
        return false;
    if (root == x)
        return true;
    path.push_back(root->data);
    if ((root->left != NULL) && findAncestors(root->left, x, path)) 
        return true;
    if ((root->right != NULL) && findAncestors(root->right, x, path))
        return true;
    path.pop_back();
    return false;
}