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

int leaMaxSum(TreeNode *root, int* sum) {
    if (root == NULL) {
        *sum = 0;
        return 0;
    }
    if (isLeaf(root)) {
        *sum = 0;
        return root->data;
    }

    int leftSum = 0, rightSum = 0;
    leftSum = leaMaxSum(root->left, sum);
    rightSum = leaMaxSum(root->right, sum);
    if (root->left != NULL && root->right != NULL) {
        *sum = max(*sum, leftSum + rightSum + root->data); 
        return max(leftSum, rightSum) + root->data;
    } else if (root->left != NULL) 
        return root->data + rightSum;
     else 
        return root->data + leftSum;
}