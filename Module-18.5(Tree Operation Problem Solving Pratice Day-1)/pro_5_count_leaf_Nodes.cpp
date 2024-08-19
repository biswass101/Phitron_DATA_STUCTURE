#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    // Write your code here.
    if (root == NULL)
        return 0;
    if (root->left == NULL and root->right == NULL)
        return 1;
    int l = noOfLeafNodes(root->left);
    int r = noOfLeafNodes(root->right);
    return l + r;
}

int main()
{
    // problem link: https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055
    return 0;
}